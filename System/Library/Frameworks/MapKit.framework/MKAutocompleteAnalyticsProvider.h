/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MKAutocompleteAnalyticsState.h>
#import <libobjc.A.dylib/MKAutocompleteAnalyticsProvider.h>

@protocol MKAutocompleteAnalyticsProvider
@required
-(id)captureNewMetrics;

@end


@protocol OS_dispatch_queue;
@class NSObject, MKAutocompleteAnalyticsState;

@interface MKAutocompleteAnalyticsProvider : NSObject <MKAutocompleteAnalyticsState, MKAutocompleteAnalyticsProvider> {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	MKAutocompleteAnalyticsState* _currentState;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> isolationQueue;              //@synthesize isolationQueue=_isolationQueue - In the implementation block
@property (nonatomic,retain) MKAutocompleteAnalyticsState * currentState;              //@synthesize currentState=_currentState - In the implementation block
-(id)init;
-(MKAutocompleteAnalyticsState *)currentState;
-(void)setCurrentState:(MKAutocompleteAnalyticsState *)arg1 ;
-(NSObject*<OS_dispatch_queue>)isolationQueue;
-(id)captureNewMetrics;
-(void)updateStateWithQuery:(id)arg1 queryTokens:(id)arg2 visibleSuggestionEntries:(id)arg3 ;
-(void)setIsolationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

