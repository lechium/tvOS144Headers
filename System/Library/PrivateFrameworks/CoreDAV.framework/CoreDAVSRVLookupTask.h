/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAV-Structs.h>
#import <CoreDAV/CoreDAVTask.h>

@class NSString, NSArray;

@interface CoreDAVSRVLookupTask : CoreDAVTask {

	NSString* _serviceString;
	NSArray* _fetchedRecords;
	CFHostRef _host;

}

@property (nonatomic,retain) NSString * serviceString;              //@synthesize serviceString=_serviceString - In the implementation block
@property (nonatomic,retain) NSArray * fetchedRecords;              //@synthesize fetchedRecords=_fetchedRecords - In the implementation block
@property (assign,nonatomic) CFHostRef host;                        //@synthesize host=_host - In the implementation block
-(id)description;
-(void)dealloc;
-(CFHostRef)host;
-(void)setHost:(CFHostRef)arg1 ;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)initWithServiceString:(id)arg1 ;
-(NSArray *)fetchedRecords;
-(NSString *)serviceString;
-(void)performCoreDAVTask;
-(void)setServiceString:(NSString *)arg1 ;
-(void)setFetchedRecords:(NSArray *)arg1 ;
@end

