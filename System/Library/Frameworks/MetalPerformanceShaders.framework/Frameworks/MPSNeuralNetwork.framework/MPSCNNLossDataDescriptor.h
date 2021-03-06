/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface MPSCNNLossDataDescriptor : NSObject <NSCopying> {

	NSData* _data;
	unsigned long long _layout;
	MPSImageCoordinate _size;
	unsigned long long _bytesPerRow;
	unsigned long long _bytesPerImage;

}

@property (nonatomic,readonly) unsigned long long layout;                   //@synthesize layout=_layout - In the implementation block
@property (nonatomic,readonly) MPSImageCoordinate size;                     //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned long long bytesPerRow;                //@synthesize bytesPerRow=_bytesPerRow - In the implementation block
@property (assign,nonatomic) unsigned long long bytesPerImage;              //@synthesize bytesPerImage=_bytesPerImage - In the implementation block
+(id)cnnLossDataDescriptorWithData:(id)arg1 layout:(unsigned long long)arg2 size:(MPSImageCoordinate)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(void)dealloc;
-(MPSImageCoordinate)size;
-(unsigned long long)bytesPerRow;
-(unsigned long long)layout;
-(void)setBytesPerRow:(unsigned long long)arg1 ;
-(unsigned long long)bytesPerImage;
-(void)setBytesPerImage:(unsigned long long)arg1 ;
@end

