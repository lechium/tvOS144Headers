/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol EMFIndexStrategy <NSObject>
@required
-(id)termsForDocument:(id)arg1;
-(id)postingsForTerm:(id)arg1;
-(id)commonDocumentsForTerms:(id)arg1;
-(id)termWeightForTerm:(id)arg1 inDocument:(id)arg2;
-(id)calculateDocumentWeightsForQueryTokenCounts:(id)arg1;

@end

