/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NEIKEv2RequestContext.h>

@interface NEIKEv2DeleteChildContext : NEIKEv2RequestContext {

	unsigned _childID;

}

@property (assign,nonatomic) unsigned childID;              //@synthesize childID=_childID - In the implementation block
-(id)description;
-(unsigned)childID;
-(void)setChildID:(unsigned)arg1 ;
-(id)initWithDeleteChildID:(unsigned)arg1 ;
@end

