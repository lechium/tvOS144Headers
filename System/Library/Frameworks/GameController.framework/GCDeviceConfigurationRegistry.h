/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GCDeviceConfigurationRegistry <NSObject>
@required
-(BOOL)updateConfiguration:(id)arg1;
-(BOOL)removeConfigurationWithIdentifier:(id)arg1;
-(BOOL)hasConfigurationWithIdentifier:(id)arg1;
-(id)configurationWithIdentifier:(id)arg1;
-(BOOL)addConfiguration:(id)arg1 replaceExisting:(BOOL)arg2;
-(void)refreshActiveConfigurationsWithCompletion:(/*^block*/id)arg1;
-(void)refreshActiveConfigurations;

@end

