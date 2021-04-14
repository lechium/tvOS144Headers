/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, AMSUIWebLoadingPageModel, AMSUIWebNavigationBarModel, NSDictionary;

@interface AMSUIWebFlowOptions : NSObject {

	BOOL _animated;
	BOOL _deferredPresentation;
	BOOL _initialLoad;
	BOOL _reuseExistingPage;
	NSString* _backgroundColor;
	AMSUIWebLoadingPageModel* _loadingPage;
	long long _modalPresentationStyle;
	long long _modalTransitionStyle;
	AMSUIWebNavigationBarModel* _navigationBar;
	NSDictionary* _pageData;

}

@property (assign,nonatomic) BOOL animated;                                           //@synthesize animated=_animated - In the implementation block
@property (nonatomic,retain) NSString * backgroundColor;                              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) BOOL deferredPresentation;                               //@synthesize deferredPresentation=_deferredPresentation - In the implementation block
@property (assign,nonatomic) BOOL initialLoad;                                        //@synthesize initialLoad=_initialLoad - In the implementation block
@property (assign,nonatomic) BOOL reuseExistingPage;                                  //@synthesize reuseExistingPage=_reuseExistingPage - In the implementation block
@property (nonatomic,retain) AMSUIWebLoadingPageModel * loadingPage;                  //@synthesize loadingPage=_loadingPage - In the implementation block
@property (assign,nonatomic) long long modalPresentationStyle;                        //@synthesize modalPresentationStyle=_modalPresentationStyle - In the implementation block
@property (assign,nonatomic) long long modalTransitionStyle;                          //@synthesize modalTransitionStyle=_modalTransitionStyle - In the implementation block
@property (nonatomic,retain) AMSUIWebNavigationBarModel * navigationBar;              //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,retain) NSDictionary * pageData;                                 //@synthesize pageData=_pageData - In the implementation block
-(NSString *)backgroundColor;
-(void)setBackgroundColor:(NSString *)arg1 ;
-(void)setModalPresentationStyle:(long long)arg1 ;
-(long long)modalPresentationStyle;
-(BOOL)animated;
-(AMSUIWebNavigationBarModel *)navigationBar;
-(void)setAnimated:(BOOL)arg1 ;
-(void)setModalTransitionStyle:(long long)arg1 ;
-(long long)modalTransitionStyle;
-(void)setNavigationBar:(AMSUIWebNavigationBarModel *)arg1 ;
-(void)setPageData:(NSDictionary *)arg1 ;
-(void)setDeferredPresentation:(BOOL)arg1 ;
-(void)setReuseExistingPage:(BOOL)arg1 ;
-(AMSUIWebLoadingPageModel *)loadingPage;
-(void)setLoadingPage:(AMSUIWebLoadingPageModel *)arg1 ;
-(BOOL)deferredPresentation;
-(NSDictionary *)pageData;
-(BOOL)reuseExistingPage;
-(BOOL)initialLoad;
-(void)setInitialLoad:(BOOL)arg1 ;
@end

