/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_ICLexiconManaging.h>

@class NSMutableArray;

@interface _ICNullLexiconManager : NSObject <_ICLexiconManaging> {

	NSMutableArray* _contactObservers;

}
-(id)init;
-(void)warmUp;
-(/*^block*/id)addContactObserver:(/*^block*/id)arg1 ;
-(void)removeContactObserver:(/*^block*/id)arg1 ;
-(id)loadLexicons:(/*^block*/id)arg1 ;
-(id)loadLexiconsUsingFilter:(/*^block*/id)arg1 ;
-(void)unloadLexicons;
-(void)hibernate;
@end

