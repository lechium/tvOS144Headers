/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libcoreroutine.dylib/RTService.h>

@class NWPathEvaluator;

@interface RTReachabilityManager : RTService {

	BOOL _observingReachabilityChanges;
	NWPathEvaluator* _pathEvaluator;
	unsigned long long _currentReachability;

}

@property (nonatomic,retain) NWPathEvaluator * pathEvaluator;                     //@synthesize pathEvaluator=_pathEvaluator - In the implementation block
@property (assign,nonatomic) unsigned long long currentReachability;              //@synthesize currentReachability=_currentReachability - In the implementation block
+(id)reachabilityToString:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NWPathEvaluator *)pathEvaluator;
-(unsigned long long)reachability;
-(void)_shutdown;
-(void)setCurrentReachability:(unsigned long long)arg1 ;
-(unsigned long long)currentReachability;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)fetchCurrentReachability:(/*^block*/id)arg1 ;
-(id)initWithPathEvaluator:(id)arg1 ;
-(void)_fetchCurrentReachability:(/*^block*/id)arg1 ;
-(void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_processReachabilityChange:(id)arg1 ;
-(id)currentReachabilityString;
-(void)setPathEvaluator:(NWPathEvaluator *)arg1 ;
@end

