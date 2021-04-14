/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShadersGraph.framework/MetalPerformanceShadersGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTLDevice;
@interface MPSGraphDevice : NSObject {

	id<MTLDevice> _mtlDevice;
	unsigned _type;
	unsigned _deviceType;
	id<MTLDevice> _metalDevice;

}

@property (nonatomic,readonly) unsigned type;                          //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,readonly) id<MTLDevice> metalDevice;              //@synthesize metalDevice=_metalDevice - In the implementation block
+(void)load;
+(id)deviceWithMTLDevice:(id)arg1 ;
-(unsigned)type;
-(id)initWithDevice:(id)arg1 ;
-(id<MTLDevice>)metalDevice;
@end

