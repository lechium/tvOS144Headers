/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMapTable;

@interface VNObservationsCache : NSObject {

	NSMapTable* _observationsCache;

}
-(id)init;
-(id)observationsForKey:(id)arg1 ;
-(void)setObservations:(id)arg1 forKey:(id)arg2 ;
-(id)observationsForRequest:(id)arg1 testedKeyHandler:(/*^block*/id)arg2 ;
@end

