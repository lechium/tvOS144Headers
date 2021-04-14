/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AMSPurchaseDelegate.h>
#import <libobjc.A.dylib/AMSUIWebActionRunnable.h>

@class ACAccount, NSString, AMSUIWebClientContext, NSDictionary;

@interface AMSUIWebBuyAction : NSObject <AMSPurchaseDelegate, AMSUIWebActionRunnable> {

	BOOL _legacyBuy;
	BOOL _makeCurrentAccount;
	BOOL _requiresAccount;
	ACAccount* _account;
	NSString* _buyParams;
	long long _type;
	AMSUIWebClientContext* _context;
	NSDictionary* _metricsOverlay;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL makeCurrentAccount;                      //@synthesize makeCurrentAccount=_makeCurrentAccount - In the implementation block
@property (assign,nonatomic) BOOL requiresAccount;                         //@synthesize requiresAccount=_requiresAccount - In the implementation block
@property (nonatomic,retain) NSDictionary * metricsOverlay;                //@synthesize metricsOverlay=_metricsOverlay - In the implementation block
@property (nonatomic,retain) ACAccount * account;                          //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSString * buyParams;                         //@synthesize buyParams=_buyParams - In the implementation block
@property (assign,nonatomic) BOOL legacyBuy;                               //@synthesize legacyBuy=_legacyBuy - In the implementation block
@property (assign,nonatomic) long long type;                               //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setType:(long long)arg1 ;
-(long long)type;
-(AMSUIWebClientContext *)context;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(NSString *)buyParams;
-(void)setBuyParams:(NSString *)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)setMetricsOverlay:(NSDictionary *)arg1 ;
-(NSDictionary *)metricsOverlay;
-(BOOL)requiresAccount;
-(void)setRequiresAccount:(BOOL)arg1 ;
-(void)purchase:(id)arg1 handleDialogRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)purchase:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)purchase:(id)arg1 handleEngagementRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
-(BOOL)makeCurrentAccount;
-(void)setMakeCurrentAccount:(BOOL)arg1 ;
-(BOOL)legacyBuy;
-(id)_runLegacyBuy;
-(id)_runBuy;
-(void)_makeCurrentAccountIfNeeded:(id)arg1 ;
-(void)setLegacyBuy:(BOOL)arg1 ;
@end

