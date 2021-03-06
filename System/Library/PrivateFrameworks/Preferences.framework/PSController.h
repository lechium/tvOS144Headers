/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PSController <PSStateRestoration>
@optional
+(void)validateSpecifier:(id)arg1;
+(void)formatSearchEntries:(id)arg1 parent:(id)arg2;
+(id)searchBundle;
-(void)suspend;
-(void)handleURL:(id)arg1;
-(void)didUnlock;
-(void)didWake;
-(BOOL)prepareHandlingURLForSpecifierID:(id)arg1 resourceDictionary:(id)arg2 animatePush:(BOOL*)arg3 withCompletion:(/*^block*/id)arg4;
-(void)didLock;
-(void)willUnlock;
-(void)willResignActive;
-(void)willBecomeActive;
-(void)statusBarWillAnimateByHeight:(double)arg1;
-(void)highlightSpecifierWithID:(id)arg1;
-(BOOL)prepareHandlingURLForSpecifierID:(id)arg1 resourceDictionary:(id)arg2 animatePush:(BOOL*)arg3;
-(void)pushController:(id)arg1;
-(void)pushController:(id)arg1 animate:(BOOL)arg2;

@required
-(id)specifier;
-(void)setSpecifier:(id)arg1;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
-(id)readPreferenceValue:(id)arg1;
-(void)setParentController:(id)arg1;
-(id)parentController;
-(void)setRootController:(id)arg1;
-(id)rootController;
-(void)showController:(id)arg1;
-(void)showController:(id)arg1 animate:(BOOL)arg2;
-(void)handleURL:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end

