/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PLPhotoLibraryPathManager, PFTimedPerfCheck, PLModelMigratorLog;

@interface PLModelMigratorPostProcessor : NSObject {

	PLPhotoLibraryPathManager* _pathManager;
	unsigned char _type;
	unsigned short _tag;
	PFTimedPerfCheck* _lifetimePerfCheck;
	PLModelMigratorLog* _logger;
	BOOL _success;

}

@property (assign,getter=isSuccess,nonatomic) BOOL success;              //@synthesize success=_success - In the implementation block
@property (readonly) PLModelMigratorLog * logger;                        //@synthesize logger=_logger - In the implementation block
-(id)init;
-(void)dealloc;
-(PLModelMigratorLog *)logger;
-(void)setSuccess:(BOOL)arg1 ;
-(BOOL)isSuccess;
-(id)initWithPathManager:(id)arg1 postMigrationType:(unsigned char)arg2 ;
-(void)_initialLog;
-(id)_generateActionTagHashBase;
-(id)_generateActionTagHash;
@end

