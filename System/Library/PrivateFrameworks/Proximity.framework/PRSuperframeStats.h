/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Proximity/Proximity-Structs.h>
@interface PRSuperframeStats : NSObject {

	shared_ptr<rose::ResponderSuperframeStats>* _stats;

}

@property (readonly) ResponderSuperframeStats stats; 
-(ResponderSuperframeStats)stats;
-(id)initWithStats:(const ResponderSuperframeStats*)arg1 ;
@end
