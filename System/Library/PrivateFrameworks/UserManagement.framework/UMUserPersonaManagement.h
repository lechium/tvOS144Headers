/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UMUserPersona;


@protocol UMUserPersonaManagement
@property (nonatomic,copy,readonly) UMUserPersona * currentPersona; 
@required
-(UMUserPersona *)currentPersona;
-(void)registerPersonaListUpdateObserver:(id)arg1 withMachService:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)createUserPersona:(id)arg1 passcodeData:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)deleteUserPersonaWithPersonaUniqueString:(id)arg1 passcodeData:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)fetchPersonaWithPersonaUniqueString:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setBundlesIdentifiers:(id)arg1 forPersonaWithPersonaUniqueString:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)setMultiPersonaBundleIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)fetchBundleIdentifierForPersonaWithPersonaUniqueString:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)fetchMultiPersonaBundleIdentifierWithcompletionHandler:(/*^block*/id)arg1;
-(BOOL)haveValidPersonaContextForPersonaUniqueString:(id)arg1;
-(void)deleteUserPersonaWithIDString:(id)arg1 passcodeData:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)deleteUserPersonaWithProfileInfo:(id)arg1 passcodeData:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)deleteUserPersonaWithType:(int)arg1 passcodeData:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)disableUserPersonaWithProfileInfo:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)fetchAllPersonasWithCompletionHandler:(/*^block*/id)arg1;
-(void)fetchAllPersonasForAllUsersWithCompletionHandler:(/*^block*/id)arg1;
-(void)fetchPersonaWithIDString:(id)arg1 CompletionHandler:(/*^block*/id)arg2;
-(void)fetchPersonaWithType:(int)arg1 CompletionHandler:(/*^block*/id)arg2;
-(void)fetchAsidMapOfAllUsersWithCompletionHandler:(/*^block*/id)arg1;
-(void)setBundlesIdentifiers:(id)arg1 forUniquePersonaWithIDString:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)setBundlesIdentifiers:(id)arg1 forUniquePersonaType:(int)arg2 completionHandler:(/*^block*/id)arg3;
-(void)fetchBundleIdentifierForPersonaWithIDString:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)fetchBundleIdentifierForType:(int)arg1 completionHandler:(/*^block*/id)arg2;
-(BOOL)haveValidPersonaContextForIDString:(id)arg1;
-(void)registerPersonaListUpdateObserver:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

