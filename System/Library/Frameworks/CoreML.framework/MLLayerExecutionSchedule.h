/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface MLLayerExecutionSchedule : NSObject {

	long long _layerError;
	NSString* _layerName;
	NSString* _deviceName;

}

@property (nonatomic,copy) NSString * layerName;                //@synthesize layerName=_layerName - In the implementation block
@property (nonatomic,copy) NSString * deviceName;               //@synthesize deviceName=_deviceName - In the implementation block
@property (assign,nonatomic) long long layerError;              //@synthesize layerError=_layerError - In the implementation block
-(NSString *)deviceName;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSString *)layerName;
-(void)setLayerName:(NSString *)arg1 ;
-(id)initWithLayerError:(long long)arg1 ;
-(id)initWithScheduledDevice:(id)arg1 layerName:(id)arg2 layerError:(long long)arg3 ;
-(long long)layerError;
-(void)setLayerError:(long long)arg1 ;
@end

