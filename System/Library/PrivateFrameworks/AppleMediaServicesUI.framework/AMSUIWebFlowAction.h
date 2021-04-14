/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <libobjc.A.dylib/AMSUIWebActionRunnable.h>

@protocol AMSUIWebPageProvider;
@class NSString, AMSUIWebLoadingPageModel, NSDictionary, AMSUIWebNavigationBarModel, AMSUIWebClientContext;

@interface AMSUIWebFlowAction : NSObject <AMSUIWebActionRunnable> {

	BOOL _deferredPresentation;
	id _actionData;
	long long _animationType;
	NSString* _backgroundColor;
	AMSUIWebLoadingPageModel* _loadingPage;
	NSDictionary* _metrics;
	AMSUIWebNavigationBarModel* _navigationBar;
	long long _presentationType;
	id<AMSUIWebPageProvider> _replacementPage;
	long long _replacementType;
	AMSUIWebClientContext* _context;
	CGSize _modalWindowSize;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;                         //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id actionData;                                           //@synthesize actionData=_actionData - In the implementation block
@property (assign,nonatomic) long long animationType;                                 //@synthesize animationType=_animationType - In the implementation block
@property (assign,nonatomic) BOOL deferredPresentation;                               //@synthesize deferredPresentation=_deferredPresentation - In the implementation block
@property (nonatomic,retain) NSString * backgroundColor;                              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) AMSUIWebLoadingPageModel * loadingPage;                  //@synthesize loadingPage=_loadingPage - In the implementation block
@property (nonatomic,retain) NSDictionary * metrics;                                  //@synthesize metrics=_metrics - In the implementation block
@property (assign,nonatomic) CGSize modalWindowSize;                                  //@synthesize modalWindowSize=_modalWindowSize - In the implementation block
@property (nonatomic,retain) AMSUIWebNavigationBarModel * navigationBar;              //@synthesize navigationBar=_navigationBar - In the implementation block
@property (assign,nonatomic) long long presentationType;                              //@synthesize presentationType=_presentationType - In the implementation block
@property (nonatomic,retain) id<AMSUIWebPageProvider> replacementPage;                //@synthesize replacementPage=_replacementPage - In the implementation block
@property (assign,nonatomic) long long replacementType;                               //@synthesize replacementType=_replacementType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AMSUIWebClientContext *)context;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(void)setMetrics:(NSDictionary *)arg1 ;
-(NSDictionary *)metrics;
-(NSString *)backgroundColor;
-(void)setBackgroundColor:(NSString *)arg1 ;
-(long long)presentationType;
-(void)setPresentationType:(long long)arg1 ;
-(long long)animationType;
-(id)actionData;
-(void)setActionData:(id)arg1 ;
-(AMSUIWebNavigationBarModel *)navigationBar;
-(void)setAnimationType:(long long)arg1 ;
-(void)setNavigationBar:(AMSUIWebNavigationBarModel *)arg1 ;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
-(void)setDeferredPresentation:(BOOL)arg1 ;
-(AMSUIWebLoadingPageModel *)loadingPage;
-(void)setLoadingPage:(AMSUIWebLoadingPageModel *)arg1 ;
-(BOOL)deferredPresentation;
-(void)_runWithType:(long long)arg1 options:(id)arg2 ;
-(long long)replacementType;
-(id<AMSUIWebPageProvider>)replacementPage;
-(CGSize)modalWindowSize;
-(void)setModalWindowSize:(CGSize)arg1 ;
-(void)setReplacementPage:(id<AMSUIWebPageProvider>)arg1 ;
-(void)setReplacementType:(long long)arg1 ;
@end

