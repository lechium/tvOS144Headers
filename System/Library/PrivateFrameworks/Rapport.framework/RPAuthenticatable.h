/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol RPAuthenticatable
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue; 
@property (assign,nonatomic) unsigned pairSetupFlags; 
@property (assign,nonatomic) unsigned pairVerifyFlags; 
@property (nonatomic,copy) NSString * password; 
@property (assign,nonatomic) int passwordType; 
@property (nonatomic,readonly) int passwordTypeActual; 
@property (nonatomic,copy) id authCompletionHandler; 
@property (nonatomic,copy) id showPasswordHandler; 
@property (nonatomic,copy) id hidePasswordHandler; 
@property (nonatomic,copy) id promptForPasswordHandler; 
@required
-(NSString *)password;
-(void)setPassword:(id)arg1;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(int)passwordType;
-(unsigned)pairSetupFlags;
-(void)setPairSetupFlags:(unsigned)arg1;
-(unsigned)pairVerifyFlags;
-(void)setPairVerifyFlags:(unsigned)arg1;
-(void)tryPassword:(id)arg1;
-(void)setPasswordType:(int)arg1;
-(int)passwordTypeActual;
-(id)authCompletionHandler;
-(void)setAuthCompletionHandler:(/*^block*/id)arg1;
-(id)showPasswordHandler;
-(void)setShowPasswordHandler:(/*^block*/id)arg1;
-(id)hidePasswordHandler;
-(void)setHidePasswordHandler:(/*^block*/id)arg1;
-(id)promptForPasswordHandler;
-(void)setPromptForPasswordHandler:(/*^block*/id)arg1;

@end

