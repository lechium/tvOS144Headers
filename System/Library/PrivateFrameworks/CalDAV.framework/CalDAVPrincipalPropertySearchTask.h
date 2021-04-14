/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVPrincipalPropertySearchTask.h>

@class NSSet, CalDAVPrincipalSearchPropertySet;

@interface CalDAVPrincipalPropertySearchTask : CoreDAVPrincipalPropertySearchTask {

	id _searchContext;
	NSSet* _searchTypes;
	NSSet* _searchStrings;
	CalDAVPrincipalSearchPropertySet* _serverSupportSet;

}

@property (nonatomic,retain) NSSet * searchTypes;                                              //@synthesize searchTypes=_searchTypes - In the implementation block
@property (nonatomic,retain) NSSet * searchStrings;                                            //@synthesize searchStrings=_searchStrings - In the implementation block
@property (nonatomic,retain) CalDAVPrincipalSearchPropertySet * serverSupportSet;              //@synthesize serverSupportSet=_serverSupportSet - In the implementation block
@property (nonatomic,retain) id searchContext;                                                 //@synthesize searchContext=_searchContext - In the implementation block
-(id)searchItems;
-(id)searchContext;
-(void)setSearchContext:(id)arg1 ;
-(id)extraAttributes;
-(NSSet *)searchTypes;
-(void)setSearchTypes:(NSSet *)arg1 ;
-(void)setSearchStrings:(NSSet *)arg1 ;
-(void)setServerSupportSet:(CalDAVPrincipalSearchPropertySet *)arg1 ;
-(CalDAVPrincipalSearchPropertySet *)serverSupportSet;
-(NSSet *)searchStrings;
-(id)initWithSearchStrings:(id)arg1 searchTypes:(id)arg2 serverSupportSet:(id)arg3 atURL:(id)arg4 ;
@end

