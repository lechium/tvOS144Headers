/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class INTask;


@protocol INSetTaskAttributeIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) INTask * modifiedTask; 
@property (assign,nonatomic) unsigned long long warnings; 
@required
-(long long)code;
-(unsigned long long)warnings;
-(void)setWarnings:(unsigned long long)arg1;
-(INTask *)modifiedTask;
-(void)setModifiedTask:(id)arg1;

@end

