/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libacmobileshim.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface ACMAppleConnect : NSObject {

	id _private;
	id _delegate;

}

@property (assign) id delegate;                                        //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSString * version; 
@property (assign,nonatomic) unsigned long long logLevel; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(NSString *)version;
-(void)setLogLevel:(unsigned long long)arg1 ;
-(unsigned long long)logLevel;
-(void)cancelRequests;
-(void)authenticateWithRequest:(id)arg1 password:(id)arg2 ;
-(id)private;
-(void)handleMemoryWarningNotification:(id)arg1 ;
-(void)setupComponents;
-(void)authenticate:(id)arg1 ;
-(void)verifyServiceTicket:(id)arg1 ;
-(id)hideAppleConnectSignInDialog;
@end

