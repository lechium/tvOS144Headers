/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <libobjc.A.dylib/AMSUIWebPageProvider.h>

@class NSString, AMSUIWebNavigationBarModel, ACAccount, NSDictionary, NSURL, AMSUIWebClientContext;

@interface AMSUIWebDynamicPageModel : NSObject <AMSUIWebPageProvider> {

	NSString* _backgroundColor;
	AMSUIWebNavigationBarModel* _navigationBar;
	ACAccount* _account;
	NSDictionary* _clientOptions;
	NSDictionary* _metricsOverlay;
	NSURL* _URL;
	AMSUIWebClientContext* _context;
	CGSize _windowSize;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;                           //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) ACAccount * account;                                       //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSDictionary * clientOptions;                              //@synthesize clientOptions=_clientOptions - In the implementation block
@property (nonatomic,retain) NSDictionary * metricsOverlay;                             //@synthesize metricsOverlay=_metricsOverlay - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                               //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) AMSUIWebNavigationBarModel * navigationBar;              //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,readonly) NSString * backgroundColor;                              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) BOOL disableReappearPlaceholder; 
@property (nonatomic,readonly) CGSize windowSize;                                       //@synthesize windowSize=_windowSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(AMSUIWebClientContext *)context;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(NSString *)backgroundColor;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(CGSize)windowSize;
-(AMSUIWebNavigationBarModel *)navigationBar;
-(void)setClientOptions:(NSDictionary *)arg1 ;
-(void)setMetricsOverlay:(NSDictionary *)arg1 ;
-(NSDictionary *)metricsOverlay;
-(NSDictionary *)clientOptions;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)createViewController;
-(BOOL)disableReappearPlaceholder;
@end

