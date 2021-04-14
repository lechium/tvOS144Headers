/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiKit/WiFiKit-Structs.h>
#import <libobjc.A.dylib/WFCertificateProviderContext.h>
#import <libobjc.A.dylib/WFContextPresenting.h>

@protocol WFNetworkView;
@class NSArray, UIViewController, WFNetworkProfile, WFNetworkScanRecord, NSString;

@interface WFCertificateContext : NSObject <WFCertificateProviderContext, WFContextPresenting> {

	long long _requestedFields;
	NSArray* _certificateChain;
	SecTrustRef _certificateTrust;
	UIViewController*<WFNetworkView> _provider;
	/*^block*/id _completionHandler;
	WFNetworkProfile* _profile;
	WFNetworkScanRecord* _network;

}

@property (nonatomic,retain) NSArray * certificateChain;                                    //@synthesize certificateChain=_certificateChain - In the implementation block
@property (assign,nonatomic) SecTrustRef certificateTrust;                                  //@synthesize certificateTrust=_certificateTrust - In the implementation block
@property (nonatomic,retain) WFNetworkProfile * profile;                                    //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) WFNetworkScanRecord * network;                                 //@synthesize network=_network - In the implementation block
@property (assign,nonatomic) long long requestedFields;                                     //@synthesize requestedFields=_requestedFields - In the implementation block
@property (nonatomic,copy) id completionHandler;                                            //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) UIViewController*<WFNetworkView> provider;              //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) BOOL needsDismissal; 
-(void)dealloc;
-(void)cancel;
-(void)setProvider:(UIViewController*<WFNetworkView>)arg1 ;
-(UIViewController*<WFNetworkView>)provider;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(WFNetworkScanRecord *)network;
-(WFNetworkProfile *)profile;
-(void)setProfile:(WFNetworkProfile *)arg1 ;
-(void)accept;
-(void)setNetwork:(WFNetworkScanRecord *)arg1 ;
-(NSArray *)certificateChain;
-(long long)requestedFields;
-(void)setRequestedFields:(long long)arg1 ;
-(SecTrustRef)certificateTrust;
-(void)setCertificateTrust:(SecTrustRef)arg1 ;
-(void)launchSettings;
-(void)setCertificateChain:(NSArray *)arg1 ;
-(id)initWithNetwork:(id)arg1 profile:(id)arg2 certificateChain:(id)arg3 ;
-(BOOL)needsDismissal;
@end

