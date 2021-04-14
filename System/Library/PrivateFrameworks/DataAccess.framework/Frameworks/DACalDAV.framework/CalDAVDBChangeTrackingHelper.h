/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSMutableDictionary;

@interface CalDAVDBChangeTrackingHelper : NSObject {

	NSString* _clientIdentifier;
	int _initialSequenceNumber;
	NSMutableDictionary* _savedChanges;

}
-(id)initWithClientIdentifier:(id)arg1 ;
-(BOOL)clearUnconsumedAndUnsavedChanges;
-(void)saveChange:(int)arg1 forEntityType:(int)arg2 ;
@end

