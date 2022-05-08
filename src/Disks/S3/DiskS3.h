#pragma once

#include <Common/config.h>

#if USE_AWS_S3

#include <Disks/S3ObjectStorage.h>
#include <Disks/DiskObjectStorage.h>

namespace DB
{

class DiskS3 final : public DiskObjectStorage
{
public:
    using DiskObjectStorage::DiskObjectStorage;
    DiskType getType() const override { return DiskType::S3; }
};

}


#endif
