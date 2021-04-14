/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Network.framework/Network
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface NWPHHandler : NSObject {

	NSArray* _allowedEntitlementGroup;
	/*function pointer*/void* _handlerFunction;

}

@property (retain) NSArray * allowedEntitlementGroup;                      //@synthesize allowedEntitlementGroup=_allowedEntitlementGroup - In the implementation block
@property (assign) /*function pointer*/void* handlerFunction;              //@synthesize handlerFunction=_handlerFunction - In the implementation block
-(id)initWithHandlerFunction:(/*function pointer*/void*)arg1 allowedEntitlementGroup:(id)arg2 ;
-(NSArray *)allowedEntitlementGroup;
-(void)setAllowedEntitlementGroup:(NSArray *)arg1 ;
-(/*function pointer*/void*)handlerFunction;
-(void)setHandlerFunction:(/*function pointer*/void*)arg1 ;
@end

