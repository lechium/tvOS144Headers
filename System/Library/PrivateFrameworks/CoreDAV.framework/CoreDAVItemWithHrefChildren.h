/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet, CoreDAVItemWithNoChildren;

@interface CoreDAVItemWithHrefChildren : CoreDAVItem {

	NSMutableSet* _hrefs;
	CoreDAVItemWithNoChildren* _unauthenticated;

}

@property (nonatomic,retain) NSMutableSet * hrefs;                                     //@synthesize hrefs=_hrefs - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * unauthenticated;              //@synthesize unauthenticated=_unauthenticated - In the implementation block
+(id)copyParseRules;
-(id)description;
-(id)hrefsAsFullURLs;
-(CoreDAVItemWithNoChildren *)unauthenticated;
-(NSMutableSet *)hrefs;
-(void)addHref:(id)arg1 ;
-(void)setHrefs:(NSMutableSet *)arg1 ;
-(void)setUnauthenticated:(CoreDAVItemWithNoChildren *)arg1 ;
-(id)hrefsAsOriginalURLs;
-(id)hrefsAsStrings;
@end

