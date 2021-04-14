/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVOutputSettingsAssistantBaseSettingsProvider.h>

@class NSDictionary, NSString;

@interface AVExportSettingsOutputSettingsAssistantBaseSettings : NSObject <AVOutputSettingsAssistantBaseSettingsProvider> {

	NSDictionary* _exportSettings;

}

@property (nonatomic,readonly) NSDictionary * baseAudioSettings; 
@property (nonatomic,readonly) NSDictionary * baseVideoSettings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSDictionary *)baseAudioSettings;
-(NSDictionary *)baseVideoSettings;
-(id)initWithOutputSettingsPreset:(id)arg1 ;
@end

