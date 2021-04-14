/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NSNumber, WLKDebouncingQueue, NSString;

@interface WLKRestrictionsObserver : NSObject <MCProfileConnectionObserver> {

	NSNumber* _TVRanking;
	NSNumber* _movieRanking;
	WLKDebouncingQueue* _debounceQueue;

}

@property (nonatomic,retain) NSNumber * TVRanking;                            //@synthesize TVRanking=_TVRanking - In the implementation block
@property (nonatomic,retain) NSNumber * movieRanking;                         //@synthesize movieRanking=_movieRanking - In the implementation block
@property (nonatomic,retain) WLKDebouncingQueue * debounceQueue;              //@synthesize debounceQueue=_debounceQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedObserver;
-(id)init;
-(void)dealloc;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)_evaluateRestrictionsChange;
-(NSNumber *)TVRanking;
-(void)setTVRanking:(NSNumber *)arg1 ;
-(NSNumber *)movieRanking;
-(void)setMovieRanking:(NSNumber *)arg1 ;
-(WLKDebouncingQueue *)debounceQueue;
-(void)setDebounceQueue:(WLKDebouncingQueue *)arg1 ;
@end

