/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIDebugReportFormatter.h>

@class NSString;

@interface _UIDebugIssueReportFormatter : _UIDebugReportFormatter {

	NSString* _header;
	NSString* _footer;
	NSString* _noIssuesDescription;
	NSString* _defaultIssuePrefix;

}

@property (nonatomic,copy) NSString * header;                           //@synthesize header=_header - In the implementation block
@property (nonatomic,copy) NSString * footer;                           //@synthesize footer=_footer - In the implementation block
@property (nonatomic,copy) NSString * noIssuesDescription;              //@synthesize noIssuesDescription=_noIssuesDescription - In the implementation block
@property (nonatomic,copy) NSString * defaultIssuePrefix;               //@synthesize defaultIssuePrefix=_defaultIssuePrefix - In the implementation block
-(id)init;
-(NSString *)header;
-(void)setHeader:(NSString *)arg1 ;
-(NSString *)footer;
-(void)setFooter:(NSString *)arg1 ;
-(void)setNoIssuesDescription:(NSString *)arg1 ;
-(id)stringFromReport:(id)arg1 ;
-(NSString *)noIssuesDescription;
-(NSString *)defaultIssuePrefix;
-(id)_componentsFromReport:(id)arg1 ;
-(void)setDefaultIssuePrefix:(NSString *)arg1 ;
@end

