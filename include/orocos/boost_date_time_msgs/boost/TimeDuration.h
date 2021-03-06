/* Auto-generated by create_boost_header.py for file /home/johannes/nasa/rdt-toolchain-2.9/install/share/kdl_msgs/cmake/../msg/Frame.msg */
#ifndef BOOST_DATE_TIME_MSGS_BOOST_SERIALIZATION_TIMEDURATION_H
#define BOOST_DATE_TIME_MSGS_BOOST_SERIALIZATION_TIMEDURATION_H

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/nvp.hpp>
#include <boost/serialization/vector.hpp>
#include <boost/serialization/string.hpp>

#include <boost_date_time_msgs/TimeDuration.h>
#include <boost_date_time_typekit/typekit/Types.hpp>

namespace boost
{
namespace serialization
{

template<class Archive, class ContainerAllocator>
void serialize(Archive& a,  ::boost_date_time_msgs::TimeDuration_<ContainerAllocator>  & m, unsigned int version)
{
    serialize(a, static_cast< ::boost::posix_time::time_duration &>(m), version);
}

} // namespace serialization
} // namespace boost

#endif // BOOST_DATE_TIME_MSGS_BOOST_SERIALIZATION_TIMEDURATION_H

