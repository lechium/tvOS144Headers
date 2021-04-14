/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSObject, NSString;

@interface TVSObjectKeyPathPair : NSObject {

	NSObject* _observedObject;
	NSString* _keyPath;

}

@property (nonatomic,readonly) NSObject * observedObject;              //@synthesize observedObject=_observedObject - In the implementation block
@property (nonatomic,copy,readonly) NSString * keyPath;                //@synthesize keyPath=_keyPath - In the implementation block
+(id)pairWithObject:(id)arg1 keyPath:(id)arg2 ;
-(NSString *)keyPath;
-(NSObject *)observedObject;
-(id)initWithObject:(id)arg1 keyPath:(id)arg2 ;
@end
