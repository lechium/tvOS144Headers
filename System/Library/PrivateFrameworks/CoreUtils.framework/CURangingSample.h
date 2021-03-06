/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData, NSString;

@interface CURangingSample : NSObject {

	int _channel;
	int _rawRSSI;
	NSData* _deviceAddress;
	NSString* _deviceModel;

}

@property (assign,nonatomic) int channel;                       //@synthesize channel=_channel - In the implementation block
@property (nonatomic,copy) NSData * deviceAddress;              //@synthesize deviceAddress=_deviceAddress - In the implementation block
@property (nonatomic,copy) NSString * deviceModel;              //@synthesize deviceModel=_deviceModel - In the implementation block
@property (assign,nonatomic) int rawRSSI;                       //@synthesize rawRSSI=_rawRSSI - In the implementation block
-(id)description;
-(int)channel;
-(void)setChannel:(int)arg1 ;
-(NSString *)deviceModel;
-(void)setDeviceModel:(NSString *)arg1 ;
-(int)rawRSSI;
-(NSData *)deviceAddress;
-(void)setDeviceAddress:(NSData *)arg1 ;
-(void)setRawRSSI:(int)arg1 ;
@end

