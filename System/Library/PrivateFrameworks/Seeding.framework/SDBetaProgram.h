/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Seeding.framework/Seeding
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSURL, NSArray;

@interface SDBetaProgram : NSObject {

	long long _programID;
	NSString* _title;
	NSString* _program;
	NSURL* _catalog;
	NSURL* _assetUpdate;
	NSURL* _assetBrain;
	NSString* _assetAudience;
	NSArray* _legalDocs;

}

@property (assign,nonatomic) long long programID;                   //@synthesize programID=_programID - In the implementation block
@property (nonatomic,retain) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * program;                    //@synthesize program=_program - In the implementation block
@property (nonatomic,retain) NSURL * catalog;                       //@synthesize catalog=_catalog - In the implementation block
@property (nonatomic,retain) NSURL * assetUpdate;                   //@synthesize assetUpdate=_assetUpdate - In the implementation block
@property (nonatomic,retain) NSURL * assetBrain;                    //@synthesize assetBrain=_assetBrain - In the implementation block
@property (nonatomic,retain) NSString * assetAudience;              //@synthesize assetAudience=_assetAudience - In the implementation block
@property (nonatomic,retain) NSArray * legalDocs;                   //@synthesize legalDocs=_legalDocs - In the implementation block
+(id)nilIfNSNull:(id)arg1 ;
+(id)betaProgramWithID:(long long)arg1 title:(id)arg2 program:(id)arg3 catalog:(id)arg4 assetUpdate:(id)arg5 assetBrain:(id)arg6 assetAudience:(id)arg7 legalDocs:(id)arg8 ;
+(id)betaProgramWithJSON:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)program;
-(void)setProgram:(NSString *)arg1 ;
-(NSURL *)catalog;
-(void)setCatalog:(NSURL *)arg1 ;
-(long long)programID;
-(void)setAssetAudience:(NSString *)arg1 ;
-(NSString *)assetAudience;
-(id)initWithID:(long long)arg1 title:(id)arg2 program:(id)arg3 catalog:(id)arg4 assetUpdate:(id)arg5 assetBrain:(id)arg6 assetAudience:(id)arg7 legalDocs:(id)arg8 ;
-(void)setProgramID:(long long)arg1 ;
-(void)setAssetUpdate:(NSURL *)arg1 ;
-(void)setAssetBrain:(NSURL *)arg1 ;
-(void)setLegalDocs:(NSArray *)arg1 ;
-(NSURL *)assetUpdate;
-(NSURL *)assetBrain;
-(NSArray *)legalDocs;
@end

