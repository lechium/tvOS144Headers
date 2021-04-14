/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface DATrafficLogger : NSObject {

	NSString* _filename;

}

@property (nonatomic,retain) NSString * filename;              //@synthesize filename=_filename - In the implementation block
+(BOOL)enabled;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(void)_ensureCustomLogFile;
-(id)initWithFilename:(id)arg1 ;
-(void)logSnippet:(id)arg1 ;
-(void)slurpAndRemoveLookasideFile:(id)arg1 prefixString:(id)arg2 suffixString:(id)arg3 ;
@end

