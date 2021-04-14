/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MLCompute/MLCompute-Structs.h>
#import <libobjc.A.dylib/MPSImageAllocator.h>

@class NSString;

@interface MLCDeviceGPUHeapAllocator : NSObject <MPSImageAllocator> {

	BOOL _isDebuggingEnabled;
	unsigned long long _heapSize;

}

@property (assign,nonatomic) BOOL isDebuggingEnabled;                    //@synthesize isDebuggingEnabled=_isDebuggingEnabled - In the implementation block
@property (nonatomic,readonly) unsigned long long heapSize;              //@synthesize heapSize=_heapSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)imageForCommandBuffer:(id)arg1 imageDescriptor:(id)arg2 kernel:(id)arg3 ;
-(id)imageBatchForCommandBuffer:(id)arg1 imageDescriptor:(id)arg2 kernel:(id)arg3 count:(unsigned long long)arg4 ;
-(BOOL)isDebuggingEnabled;
-(void)setIsDebuggingEnabled:(BOOL)arg1 ;
-(id)initWithHeapSize:(unsigned long long)arg1 ;
-(unsigned long long)heapSize;
@end
