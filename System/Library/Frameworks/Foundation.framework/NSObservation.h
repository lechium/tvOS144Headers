/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:19:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Foundation/Foundation-Structs.h>
@interface NSObservation : NSObject
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)remove;
-(id)initWithObservable:(id)arg1 blockSink:(/*^block*/id)arg2 tag:(int)arg3 ;
-(id)initWithObservable:(id)arg1 observer:(id)arg2 ;
-(void*)_observerStorageOfSize:(unsigned long long)arg1 ;
-(id*)_observerStorage;
@end

