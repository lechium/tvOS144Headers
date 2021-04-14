/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/VCVideoRuleCollectionsCamera.h>

@protocol VCHardwareSettingsMacProtocol;
@interface VCVideoRuleCollectionsCameraMac : VCVideoRuleCollectionsCamera {

	unsigned _encodeScore;
	unsigned _decodeScore;
	id<VCHardwareSettingsMacProtocol> _hardwareSettings;

}
+(id)sharedInstance;
-(void)dealloc;
-(double)preferredAspectRatio;
-(BOOL)useSoftFramerateSwitching;
-(void)initSupportedPayloads;
-(BOOL)setupRules;
-(BOOL)setupH264Rules;
-(BOOL)setupHEVCRules;
-(id)initWithHardwareSettings:(id)arg1 ;
-(void)computeEncodingScore;
-(void)computeDecodingScore;
-(BOOL)setupH264WifiRules;
-(BOOL)setUp1080pRules:(int)arg1 ;
-(void)_removeRulesGreaterThanVGA;
-(void)_addWVGAEncodingRules;
-(void)_removeRulesGreaterThan720p;
-(void)_resetJ92EncodingRulesForCameraIsHD:(BOOL)arg1 isWVGA:(BOOL)arg2 is1080:(BOOL)arg3 ;
-(void)resetEncodingRulesForCameraIsHD:(BOOL)arg1 isWVGA:(BOOL)arg2 is1080:(BOOL)arg3 ;
@end

