/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXGestureProvider.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSArray, UILongPressGestureRecognizer, PXForYouSuggestionAssetsDataSourceManager, NSString;

@interface PXForYouSuggestionOneupGestureProvider : PXGestureProvider <UIGestureRecognizerDelegate> {

	NSArray* _gestureRecognizers;
	UILongPressGestureRecognizer* _longPressRecognizer;
	PXForYouSuggestionAssetsDataSourceManager* _dataSourceManager;

}

@property (nonatomic,readonly) PXForYouSuggestionAssetsDataSourceManager * dataSourceManager;              //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)gestureRecognizers;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(PXForYouSuggestionAssetsDataSourceManager *)dataSourceManager;
-(id)initWithDataSourceManager:(id)arg1 ;
-(void)_handleLongPress:(id)arg1 ;
-(void)hostingViewDidChange;
-(void)_createGestureRecognizersIfNeeded;
-(void)_startShowingOriginal;
-(void)_stopShowingOriginal;
@end

