/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MPSCore/MPSCore-Structs.h>
@class NSString;

@interface MPSNDArray : NSObject {

	 _dimensionLengths;
	 _sliceOffsets;
	 _sliceLengths;
	 _dimensionOrder;
	unsigned long long _numberOfDimensions;
	unsigned _dataType;
	NSString* _label;
	MPSDevice* _device;
	MPSNDArray* _parent;
	MPSAutoBuffer* _buffer;
	unsigned long long _offset;
	unsigned long long _rowBytes;
	MPSLibrary* _library;
	BOOL _isTemporary;

}

@property (copy) NSString * label;                                                 //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) unsigned dataType;                                  //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,readonly) unsigned long long dataTypeSize; 
@property (nonatomic,readonly) unsigned long long numberOfDimensions;              //@synthesize numberOfDimensions=_numberOfDimensions - In the implementation block
@property (nonatomic,retain,readonly) id<MTLDevice> device; 
@property (nonatomic,retain,readonly) MPSNDArray * parent;                         //@synthesize parent=_parent - In the implementation block
+(id)defaultAllocator;
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)debugDescription;
-(id)init;
-(void)dealloc;
-(MPSNDArray *)parent;
-(NSString *)label;
-(id)buffer;
-(id)descriptor;
-(void)setLabel:(NSString *)arg1 ;
-(id<MTLDevice>)device;
-(unsigned long long)offset;
-(unsigned)dataType;
-(unsigned long long)resourceSize;
-(id)initWithDevice:(id)arg1 descriptor:(id)arg2 ;
-(unsigned long long)lengthOfDimension:(unsigned long long)arg1 ;
-(unsigned long long)numberOfDimensions;
-(void)exportDataWithCommandBuffer:(id)arg1 toBuffer:(id)arg2 destinationDataType:(unsigned)arg3 offset:(unsigned long long)arg4 rowStrides:(long long*)arg5 ;
-(id)initWithBuffer:(id)arg1 descriptor:(id)arg2 ;
-(id)arrayViewWithCommandBuffer:(id)arg1 computeEncoder:(id)arg2 descriptor:(id)arg3 destinationArray:(id)arg4 aliasing:(unsigned long long)arg5 ;
-(id)safeArrayViewWithCommandBuffer:(id)arg1 computeEncoder:(id)arg2 descriptor:(id)arg3 aliasing:(unsigned long long)arg4 ;
-(void)makeStrideBytesInArray:(long long*)arg1 ;
-(void)encodeCopyWithCommandBuffer:(id)arg1 computeEncoder:(id)arg2 toBuffer:(id)arg3 destinationDataType:(unsigned)arg4 destinationOffsetBytes:(unsigned long long)arg5 destinationStrideBytes:(long long*)arg6 ;
-(void)encodeReshapedMatrixWithCommandBuffer:(id)arg1 computeEncoder:(id)arg2 toBuffer:(id)arg3 destinationDataType:(unsigned)arg4 destinationOffsetBytes:(unsigned long long)arg5 destinationRowBytes:(unsigned long long)arg6 destinationColumns:(unsigned long long)arg7 destinationRows:(unsigned long long)arg8 ;
-(void)exportDataWithCommandBuffer:(id)arg1 toBuffer:(id)arg2 destinationDataType:(unsigned)arg3 offset:(unsigned long long)arg4 rowStrides:(long long*)arg5 lengths:(unsigned long long*)arg6 numLengths:(unsigned long long)arg7 flatteningLevel:(unsigned long long)arg8 ;
-(1)makeStrideBytes;
-(void)exportDataWithCommandBuffer:(id)arg1 computeEncoder:(id)arg2 toBuffer:(id)arg3 destinationDataType:(unsigned)arg4 offset:(unsigned long long)arg5 rowStrides:(long long*)arg6 lengths:(unsigned long long*)arg7 numLengths:(unsigned long long)arg8 flatteningLevel:(unsigned long long)arg9 ;
-(void)copyDataWithCommandBuffer:(id)arg1 images:(id)arg2 offset:(MPSImageCoordinate)arg3 imageToArray:(BOOL)arg4 ;
-(void)printNDArrayToFile:(_sFILE*)arg1 ;
-(void)readBytes:(void*)arg1 strideBytes:(long long*)arg2 ;
-(unsigned long long)dataTypeSize;
-(id)dataWithCommandBuffer:(id)arg1 ;
-(id)initWithDevice:(id)arg1 matrix:(id)arg2 ;
-(id)initWithDevice:(id)arg1 scalar:(double)arg2 ;
-(id)arrayViewWithCommandBuffer:(id)arg1 descriptor:(id)arg2 aliasing:(unsigned long long)arg3 ;
-(id)safeArrayViewWithCommandBuffer:(id)arg1 descriptor:(id)arg2 aliasing:(unsigned long long)arg3 ;
-(void)arrayViewWithCommandBuffer:(id)arg1 descriptor:(id)arg2 destinationArray:(id)arg3 aliasing:(unsigned long long)arg4 ;
-(id)matrixWithCommandBuffer:(id)arg1 descriptor:(id)arg2 aliasing:(unsigned long long)arg3 ;
-(void)encodeReshapedBatchWithCommandBuffer:(id)arg1 toBuffer:(id)arg2 destinationDataType:(unsigned)arg3 destinationOffsetBytes:(unsigned long long)arg4 destinationRowBytes:(unsigned long long)arg5 destinationColumns:(unsigned long long)arg6 destinationRows:(unsigned long long)arg7 ;
-(void)importDataWithCommandBuffer:(id)arg1 fromBuffer:(id)arg2 sourceDataType:(unsigned)arg3 offset:(unsigned long long)arg4 rowStrides:(long long*)arg5 ;
-(void)exportDataWithCommandBuffer:(id)arg1 toImages:(id)arg2 offset:(MPSImageCoordinate)arg3 ;
-(void)importDataWithCommandBuffer:(id)arg1 fromImages:(id)arg2 offset:(MPSImageCoordinate)arg3 ;
-(1)makeStrideElements;
-(void)writeBytes:(void*)arg1 strideBytes:(long long*)arg2 ;
-(void)synchronizeOnCommandBuffer:(id)arg1 ;
-(void)printNDArray;
-(id)checkNDArray:(float*)arg1 nativeUlps:(float)arg2 absoluteErr:(float)arg3 ;
@end

