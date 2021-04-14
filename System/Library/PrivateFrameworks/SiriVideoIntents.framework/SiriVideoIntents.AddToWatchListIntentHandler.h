/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVideoIntents.framework/SiriVideoIntents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AddToWatchListIntentHandling.h>

@interface SiriVideoIntents.AddToWatchListIntentHandler : NSObject <AddToWatchListIntentHandling> {

	 contentResolver;
	 watchListService;
	 analyticsService;

}
-(id)init;
-(void)resolveContentForAddToWatchList:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)confirmAddToWatchList:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleAddToWatchList:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

