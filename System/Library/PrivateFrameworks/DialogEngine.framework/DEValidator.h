/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface DEValidator : NSObject {

	NSString* _templateDir;

}

@property (nonatomic,retain) NSString * templateDir;              //@synthesize templateDir=_templateDir - In the implementation block
-(void)setTemplateDir:(NSString *)arg1 ;
-(NSString *)templateDir;
-(id)jsonToResult:(id)arg1 ;
-(id)validateString:(id)arg1 localeString:(id)arg2 ;
-(id)validateFile:(id)arg1 locale:(id)arg2 ;
-(id)validate:(id)arg1 locale:(id)arg2 ;
-(id)validateWithParams:(id)arg1 locale:(id)arg2 ;
@end

