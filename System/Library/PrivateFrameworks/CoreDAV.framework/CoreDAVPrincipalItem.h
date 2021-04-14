/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVHrefItem, CoreDAVItemWithNoChildren, CoreDAVItem;

@interface CoreDAVPrincipalItem : CoreDAVItem {

	CoreDAVHrefItem* _href;
	CoreDAVItemWithNoChildren* _all;
	CoreDAVItemWithNoChildren* _authenticated;
	CoreDAVItemWithNoChildren* _unauthenticated;
	CoreDAVItem* _property;
	CoreDAVItemWithNoChildren* _selfItem;

}

@property (nonatomic,retain) CoreDAVHrefItem * href;                                   //@synthesize href=_href - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * all;                          //@synthesize all=_all - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * authenticated;                //@synthesize authenticated=_authenticated - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * unauthenticated;              //@synthesize unauthenticated=_unauthenticated - In the implementation block
@property (nonatomic,retain) CoreDAVItem * property;                                   //@synthesize property=_property - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * selfItem;                     //@synthesize selfItem=_selfItem - In the implementation block
+(id)copyParseRules;
-(id)description;
-(id)init;
-(void)write:(id)arg1 ;
-(void)setAuthenticated:(CoreDAVItemWithNoChildren *)arg1 ;
-(CoreDAVItem *)property;
-(void)setProperty:(CoreDAVItem *)arg1 ;
-(CoreDAVItemWithNoChildren *)authenticated;
-(CoreDAVHrefItem *)href;
-(void)setHref:(CoreDAVHrefItem *)arg1 ;
-(id)hashString;
-(CoreDAVItemWithNoChildren *)all;
-(void)setAll:(CoreDAVItemWithNoChildren *)arg1 ;
-(CoreDAVItemWithNoChildren *)unauthenticated;
-(void)setUnauthenticated:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setSelfItem:(CoreDAVItemWithNoChildren *)arg1 ;
-(CoreDAVItemWithNoChildren *)selfItem;
-(id)initTypeIsAll;
-(id)initTypeIsHREFWithURL:(id)arg1 ;
-(id)initTypeIsProperty:(id)arg1 ;
-(id)initTypeIsAuthenticated;
-(id)initTypeIsUnauthenticated;
-(id)initTypeIsSelf;
@end

