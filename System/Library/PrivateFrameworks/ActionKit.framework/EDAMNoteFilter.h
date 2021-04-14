/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/FATObject.h>

@class NSNumber, NSString, NSArray;

@interface EDAMNoteFilter : FATObject {

	NSNumber* _order;
	NSNumber* _ascending;
	NSString* _words;
	NSString* _notebookGuid;
	NSArray* _tagGuids;
	NSString* _timeZone;
	NSNumber* _inactive;
	NSString* _emphasized;
	NSNumber* _includeAllReadableNotebooks;
	NSString* _context;

}

@property (nonatomic,retain) NSNumber * order;                                    //@synthesize order=_order - In the implementation block
@property (nonatomic,retain) NSNumber * ascending;                                //@synthesize ascending=_ascending - In the implementation block
@property (nonatomic,retain) NSString * words;                                    //@synthesize words=_words - In the implementation block
@property (nonatomic,retain) NSString * notebookGuid;                             //@synthesize notebookGuid=_notebookGuid - In the implementation block
@property (nonatomic,retain) NSArray * tagGuids;                                  //@synthesize tagGuids=_tagGuids - In the implementation block
@property (nonatomic,retain) NSString * timeZone;                                 //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,retain) NSNumber * inactive;                                 //@synthesize inactive=_inactive - In the implementation block
@property (nonatomic,retain) NSString * emphasized;                               //@synthesize emphasized=_emphasized - In the implementation block
@property (nonatomic,retain) NSNumber * includeAllReadableNotebooks;              //@synthesize includeAllReadableNotebooks=_includeAllReadableNotebooks - In the implementation block
@property (nonatomic,retain) NSString * context;                                  //@synthesize context=_context - In the implementation block
+(id)structName;
+(id)structFields;
-(void)setTimeZone:(NSString *)arg1 ;
-(NSString *)timeZone;
-(NSNumber *)ascending;
-(NSString *)words;
-(NSNumber *)order;
-(NSString *)context;
-(void)setContext:(NSString *)arg1 ;
-(NSNumber *)inactive;
-(void)setAscending:(NSNumber *)arg1 ;
-(void)setOrder:(NSNumber *)arg1 ;
-(void)setWords:(NSString *)arg1 ;
-(NSString *)emphasized;
-(void)setEmphasized:(NSString *)arg1 ;
-(void)setInactive:(NSNumber *)arg1 ;
-(NSString *)notebookGuid;
-(void)setNotebookGuid:(NSString *)arg1 ;
-(NSArray *)tagGuids;
-(void)setTagGuids:(NSArray *)arg1 ;
-(NSNumber *)includeAllReadableNotebooks;
-(void)setIncludeAllReadableNotebooks:(NSNumber *)arg1 ;
@end
