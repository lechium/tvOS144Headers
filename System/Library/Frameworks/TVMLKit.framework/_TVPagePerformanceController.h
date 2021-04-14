/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _TVPagePerformanceDelegate;
#import <TVMLKit/TVMLKit-Structs.h>
@class NSMutableArray, NSDictionary;

@interface _TVPagePerformanceController : NSObject {

	timeval _baseTimeval;
	unsigned long long _baseAbsoluteTime;
	NSMutableArray* _templateEntries;
	BOOL _pageHasSubpages;
	BOOL _pageWasInterrupted;
	BOOL _pageWasUpdated;
	BOOL _pageIsLoading;
	id<_TVPagePerformanceDelegate> _delegate;
	unsigned long long _viewWillLoad;
	unsigned long long _viewDidLoad;
	unsigned long long _viewWillAppear;
	unsigned long long _viewDidAppear;
	unsigned long long _viewWillDisappear;
	unsigned long long _viewDidDisappear;
	unsigned long long _pageCompleteDuration;
	unsigned long long _pageSetupDuration;
	unsigned long long _pageRenderDuration;
	unsigned long long _pageResourceDuration;
	unsigned long long _pageTransitionDuration;

}

@property (assign,nonatomic) unsigned long long viewWillLoad;                             //@synthesize viewWillLoad=_viewWillLoad - In the implementation block
@property (assign,nonatomic) unsigned long long viewDidLoad;                              //@synthesize viewDidLoad=_viewDidLoad - In the implementation block
@property (assign,nonatomic) unsigned long long viewWillAppear;                           //@synthesize viewWillAppear=_viewWillAppear - In the implementation block
@property (assign,nonatomic) unsigned long long viewDidAppear;                            //@synthesize viewDidAppear=_viewDidAppear - In the implementation block
@property (assign,nonatomic) unsigned long long viewWillDisappear;                        //@synthesize viewWillDisappear=_viewWillDisappear - In the implementation block
@property (assign,nonatomic) unsigned long long viewDidDisappear;                         //@synthesize viewDidDisappear=_viewDidDisappear - In the implementation block
@property (assign,nonatomic) BOOL pageIsLoading;                                          //@synthesize pageIsLoading=_pageIsLoading - In the implementation block
@property (assign,nonatomic) BOOL pageHasSubpages;                                        //@synthesize pageHasSubpages=_pageHasSubpages - In the implementation block
@property (assign,nonatomic) BOOL pageWasInterrupted;                                     //@synthesize pageWasInterrupted=_pageWasInterrupted - In the implementation block
@property (assign,nonatomic) BOOL pageWasUpdated;                                         //@synthesize pageWasUpdated=_pageWasUpdated - In the implementation block
@property (assign,nonatomic) unsigned long long pageCompleteDuration;                     //@synthesize pageCompleteDuration=_pageCompleteDuration - In the implementation block
@property (assign,nonatomic) unsigned long long pageSetupDuration;                        //@synthesize pageSetupDuration=_pageSetupDuration - In the implementation block
@property (assign,nonatomic) unsigned long long pageRenderDuration;                       //@synthesize pageRenderDuration=_pageRenderDuration - In the implementation block
@property (assign,nonatomic) unsigned long long pageResourceDuration;                     //@synthesize pageResourceDuration=_pageResourceDuration - In the implementation block
@property (assign,nonatomic) unsigned long long pageTransitionDuration;                   //@synthesize pageTransitionDuration=_pageTransitionDuration - In the implementation block
@property (assign,nonatomic,__weak) id<_TVPagePerformanceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSDictionary * metrics; 
+(void)postNotificationForImageProxy:(id)arg1 withLoadingStatus:(BOOL)arg2 ;
+(BOOL)isPerformanceUIEnabled;
-(id)init;
-(id<_TVPagePerformanceDelegate>)delegate;
-(void)setDelegate:(id<_TVPagePerformanceDelegate>)arg1 ;
-(NSDictionary *)metrics;
-(unsigned long long)viewDidLoad;
-(unsigned long long)viewDidAppear;
-(unsigned long long)viewDidDisappear;
-(void)setViewDidAppear:(unsigned long long)arg1 ;
-(void)markViewWillLoad;
-(void)markViewDidLoad;
-(void)markViewWillAppear;
-(void)markViewDidAppear;
-(void)markViewWillDisappear;
-(void)markViewDidDisappear;
-(id)getEntryForTemplate:(id)arg1 ;
-(BOOL)pageWasUpdated;
-(BOOL)pageWasInterrupted;
-(BOOL)pageHasSubpages;
-(id)buildPagePerformanceView;
-(void)_maybeDeliverMetrics;
-(unsigned long long)viewWillLoad;
-(void)setViewWillLoad:(unsigned long long)arg1 ;
-(void)setViewDidLoad:(unsigned long long)arg1 ;
-(unsigned long long)viewWillAppear;
-(void)setViewWillAppear:(unsigned long long)arg1 ;
-(unsigned long long)viewWillDisappear;
-(void)setViewWillDisappear:(unsigned long long)arg1 ;
-(unsigned long long)templateDidComplete;
-(void)setPageWasInterrupted:(BOOL)arg1 ;
-(void)setViewDidDisappear:(unsigned long long)arg1 ;
-(void)setPageWasUpdated:(BOOL)arg1 ;
-(void)setPageIsLoading:(BOOL)arg1 ;
-(void)setPageHasSubpages:(BOOL)arg1 ;
-(void)_calculatePageDurations;
-(unsigned long long)pageCompleteDuration;
-(unsigned long long)pageSetupDuration;
-(unsigned long long)pageRenderDuration;
-(unsigned long long)pageResourceDuration;
-(unsigned long long)pageTransitionDuration;
-(void)setPageRenderDuration:(unsigned long long)arg1 ;
-(void)setPageCompleteDuration:(unsigned long long)arg1 ;
-(void)setPageSetupDuration:(unsigned long long)arg1 ;
-(void)setPageResourceDuration:(unsigned long long)arg1 ;
-(void)setPageTransitionDuration:(unsigned long long)arg1 ;
-(BOOL)_isMetricsReady;
-(BOOL)pageIsLoading;
@end

