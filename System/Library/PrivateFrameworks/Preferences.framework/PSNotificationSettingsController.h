/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, BBSettingsGateway, NSDictionary;

@interface PSNotificationSettingsController : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	BBSettingsGateway* _gateway;
	NSDictionary* _sectionInfosByIdentifier;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)allSectionInfoIdentifiers;
-(id)sectionInfoForIdentifier:(id)arg1 ;
@end

