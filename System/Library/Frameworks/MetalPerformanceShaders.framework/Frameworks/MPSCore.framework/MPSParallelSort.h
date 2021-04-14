/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSCore/MPSCore-Structs.h>
#import <MPSCore/MPSKernel.h>

@class MPSParallelExclusiveScan;

@interface MPSParallelSort : MPSKernel {

	unsigned long long dataTypeSizeInBytes;
	unsigned _sourceDataType;
	unsigned _destinationDataType;
	int _sortOp;
	MPSParallelExclusiveScan* _exclusiveScanKernel;
	unsigned _keyPairDataType;
	unsigned _valuePairDataType;

}

@property (nonatomic,readonly) unsigned keyPairDataType;                //@synthesize keyPairDataType=_keyPairDataType - In the implementation block
@property (nonatomic,readonly) unsigned valuePairDataType;              //@synthesize valuePairDataType=_valuePairDataType - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)initPrivateWithDevice:(id)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceBuffer:(id)arg2 sourceOffset:(unsigned long long)arg3 destinationBuffer:(id)arg4 destinationOffset:(unsigned long long)arg5 numEntries:(unsigned long long)arg6 ;
-(id)initWithDevice:(id)arg1 keyPairDataType:(unsigned)arg2 valuePairDataType:(unsigned)arg3 ;
-(id)initWithDevice:(id)arg1 keyPairDataType:(unsigned)arg2 valuePairDataType:(unsigned)arg3 sortOp:(int)arg4 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceKeyBuffer:(id)arg2 sourceKeyOffset:(unsigned long long)arg3 sourceValueBuffer:(id)arg4 sourceValueOffset:(unsigned long long)arg5 destinationKeyBuffer:(id)arg6 destinationKeyOffset:(unsigned long long)arg7 destinationValueBuffer:(id)arg8 destinationValueOffset:(unsigned long long)arg9 numEntries:(unsigned long long)arg10 ;
-(unsigned)keyPairDataType;
-(unsigned)valuePairDataType;
@end

