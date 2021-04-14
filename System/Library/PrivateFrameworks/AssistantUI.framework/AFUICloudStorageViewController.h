/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSListController.h>

@class AFSettingsConnection;

@interface AFUICloudStorageViewController : PSListController {

	AFSettingsConnection* _settings;

}
-(void)viewDidLoad;
-(id)specifiers;
-(void)didReceiveMemoryWarning;
-(void)handleDisableAndDeleteButtonPress;
-(void)confirmDisableForMultiUserVoiceIdentification;
-(void)confirmDisable;
-(void)_disableAndDeleteCloudSync;
@end

