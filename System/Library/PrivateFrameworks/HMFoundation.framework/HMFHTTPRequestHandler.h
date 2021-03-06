/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSPredicate;

@interface HMFHTTPRequestHandler : HMFObject {

	NSPredicate* _methodPredicate;
	NSPredicate* _URLPredicate;
	/*^block*/id _matchBlock;
	/*^block*/id _requestBlock;

}

@property (nonatomic,copy,readonly) NSPredicate * methodPredicate;              //@synthesize methodPredicate=_methodPredicate - In the implementation block
@property (nonatomic,copy,readonly) NSPredicate * URLPredicate;                 //@synthesize URLPredicate=_URLPredicate - In the implementation block
@property (nonatomic,copy,readonly) id matchBlock;                              //@synthesize matchBlock=_matchBlock - In the implementation block
@property (nonatomic,copy) id requestBlock;                                     //@synthesize requestBlock=_requestBlock - In the implementation block
+(BOOL)_isValidMethodPrediate:(id)arg1 ;
+(BOOL)_isValidURLPredicate:(id)arg1 ;
-(id)init;
-(id)initWithMethodPredicate:(id)arg1 URLPredicate:(id)arg2 matchBlock:(/*^block*/id)arg3 ;
-(NSPredicate *)methodPredicate;
-(NSPredicate *)URLPredicate;
-(id)matchBlock;
-(id)requestBlock;
-(void)setRequestBlock:(id)arg1 ;
@end

