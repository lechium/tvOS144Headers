/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL;

@interface CallDBMetaInfo : NSObject {

	NSURL* _dbInfoPrefFile;

}

@property (retain) NSURL * dbInfoPrefFile;              //@synthesize dbInfoPrefFile=_dbInfoPrefFile - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(long long)readDatabaseVersion:(BOOL)arg1 ;
-(BOOL)validateInfo:(BOOL)arg1 ;
-(NSURL *)dbInfoPrefFile;
-(void)writeDatabaseVersion:(long long)arg1 isTemp:(BOOL)arg2 ;
-(void)setDbInfoPrefFile:(NSURL *)arg1 ;
@end

