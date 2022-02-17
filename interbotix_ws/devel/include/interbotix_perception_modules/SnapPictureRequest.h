// Generated by gencpp from file interbotix_perception_modules/SnapPictureRequest.msg
// DO NOT EDIT!


#ifndef INTERBOTIX_PERCEPTION_MODULES_MESSAGE_SNAPPICTUREREQUEST_H
#define INTERBOTIX_PERCEPTION_MODULES_MESSAGE_SNAPPICTUREREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace interbotix_perception_modules
{
template <class ContainerAllocator>
struct SnapPictureRequest_
{
  typedef SnapPictureRequest_<ContainerAllocator> Type;

  SnapPictureRequest_()
    : filename()  {
    }
  SnapPictureRequest_(const ContainerAllocator& _alloc)
    : filename(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _filename_type;
  _filename_type filename;





  typedef boost::shared_ptr< ::interbotix_perception_modules::SnapPictureRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::interbotix_perception_modules::SnapPictureRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SnapPictureRequest_

typedef ::interbotix_perception_modules::SnapPictureRequest_<std::allocator<void> > SnapPictureRequest;

typedef boost::shared_ptr< ::interbotix_perception_modules::SnapPictureRequest > SnapPictureRequestPtr;
typedef boost::shared_ptr< ::interbotix_perception_modules::SnapPictureRequest const> SnapPictureRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::interbotix_perception_modules::SnapPictureRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::interbotix_perception_modules::SnapPictureRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::interbotix_perception_modules::SnapPictureRequest_<ContainerAllocator1> & lhs, const ::interbotix_perception_modules::SnapPictureRequest_<ContainerAllocator2> & rhs)
{
  return lhs.filename == rhs.filename;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::interbotix_perception_modules::SnapPictureRequest_<ContainerAllocator1> & lhs, const ::interbotix_perception_modules::SnapPictureRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace interbotix_perception_modules

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::interbotix_perception_modules::SnapPictureRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::interbotix_perception_modules::SnapPictureRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::interbotix_perception_modules::SnapPictureRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::interbotix_perception_modules::SnapPictureRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::interbotix_perception_modules::SnapPictureRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::interbotix_perception_modules::SnapPictureRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::interbotix_perception_modules::SnapPictureRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "030824f52a0628ead956fb9d67e66ae9";
  }

  static const char* value(const ::interbotix_perception_modules::SnapPictureRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x030824f52a0628eaULL;
  static const uint64_t static_value2 = 0xd956fb9d67e66ae9ULL;
};

template<class ContainerAllocator>
struct DataType< ::interbotix_perception_modules::SnapPictureRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "interbotix_perception_modules/SnapPictureRequest";
  }

  static const char* value(const ::interbotix_perception_modules::SnapPictureRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::interbotix_perception_modules::SnapPictureRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This service is used specifically in the interbotix_perception_modules package\n"
"#\n"
"# Save the latest rgb picture with the specified name\n"
"#\n"
"# Request consists of:\n"
"#   filename : name of file in which to save image including extension (.jpg)\n"
"#\n"
"# Response consists of:\n"
"#    success : boolean indication of service success\n"
"\n"
"string filename\n"
;
  }

  static const char* value(const ::interbotix_perception_modules::SnapPictureRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::interbotix_perception_modules::SnapPictureRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.filename);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SnapPictureRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::interbotix_perception_modules::SnapPictureRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::interbotix_perception_modules::SnapPictureRequest_<ContainerAllocator>& v)
  {
    s << indent << "filename: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.filename);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INTERBOTIX_PERCEPTION_MODULES_MESSAGE_SNAPPICTUREREQUEST_H
