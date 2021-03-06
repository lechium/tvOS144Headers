/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:01 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, HAPAudioStreamCodecConfiguration;

@interface HMDSupportedSiriAudioConfigurations : NSObject {

	long long _siriInputType;
	NSArray* _supportedConfigurations;
	HAPAudioStreamCodecConfiguration* _selectedConfiguration;

}

@property (assign,nonatomic) long long siriInputType;                                               //@synthesize siriInputType=_siriInputType - In the implementation block
@property (nonatomic,retain) NSArray * supportedConfigurations;                                     //@synthesize supportedConfigurations=_supportedConfigurations - In the implementation block
@property (nonatomic,retain) HAPAudioStreamCodecConfiguration * selectedConfiguration;              //@synthesize selectedConfiguration=_selectedConfiguration - In the implementation block
-(NSArray *)supportedConfigurations;
-(void)setSupportedConfigurations:(NSArray *)arg1 ;
-(long long)siriInputType;
-(HAPAudioStreamCodecConfiguration *)selectedConfiguration;
-(void)setSiriInputType:(long long)arg1 ;
-(void)setSelectedConfiguration:(HAPAudioStreamCodecConfiguration *)arg1 ;
@end

