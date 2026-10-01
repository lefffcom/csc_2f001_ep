


<!DOCTYPE html>
<html class="gl-system ui-neutral with-top-bar with-header application-chrome page-with-panels with-gl-container-queries with-system-header user-logged-out" lang="en">
<head prefix="og: http://ogp.me/ns#">
<meta charset="utf-8">
<meta content="IE=edge" http-equiv="X-UA-Compatible">
<meta content="width=device-width, initial-scale=1" name="viewport">
<title>lab2/Makefile · main · Benagil / cours / csc_2f001_ep / csc_2f001_ep · GitLab</title>
<link as="font" crossorigin="" href="/assets/gitlab-sans/GitLabSans-9892dc17af892e03de41625c0ee325117a3b8ee4ba6005f3a3eac68510030aed.woff2" rel="preload">
<link as="font" crossorigin="" href="/assets/gitlab-sans/GitLabSans-Italic-f96f17332d67b21ada2dfba5f0c0e1d5801eab99330472057bf18edd93d4ccf7.woff2" rel="preload">
<link as="font" crossorigin="" href="/assets/gitlab-mono/GitLabMono-29c2152dac8739499dd0fe5cd37a486ebcc7d4798c9b6d3aeab65b3172375b05.woff2" rel="preload">
<link as="font" crossorigin="" href="/assets/gitlab-mono/GitLabMono-Italic-af36701a2188df32a9dcea12e0424c380019698d4f76da9ad8ea2fd59432cf83.woff2" rel="preload">

<script>
//<![CDATA[
window.gon={};gon.api_version="v4";gon.default_avatar_url="https://gitlab.inria.fr/assets/no_avatar-849f9c04a3a0d0cea2424ae97b27447dc64a7dbfae83c036c45b403392f0e8ba.png";gon.max_file_size=50;gon.asset_host=null;gon.webpack_public_path="/assets/webpack/";gon.relative_url_root="";gon.user_color_mode="gl-system";gon.user_color_scheme="white";gon.markdown_surround_selection=null;gon.markdown_automatic_lists=null;gon.markdown_maintain_indentation=null;gon.math_rendering_limits_enabled=true;gon.iframe_rendering_enabled=false;gon.iframe_rendering_allowlist=[];gon.recaptcha_api_server_url="https://www.recaptcha.net/recaptcha/api.js";gon.recaptcha_sitekey="";gon.gitlab_url="https://gitlab.inria.fr";gon.promo_url="https://about.gitlab.com";gon.forum_url="https://forum.gitlab.com";gon.docs_url="https://docs.gitlab.com";gon.revision="25601e79860";gon.feature_category="source_code_management";gon.gitlab_logo="/assets/gitlab_logo-2957169c8ef64c58616a1ac3f4fc626e8a35ce4eb3ed31bb0d873712f2a041a0.png";gon.secure=true;gon.sprite_icons="/assets/icons-744c96d42bcc6345fdb1c870432a980c5f983ed177df344a4a5f94b625ac4ce8.svg";gon.sprite_file_icons="/assets/file_icons/file_icons-90de312d3dbe794a19dee8aee171f184ff69ca9c9cf9fe37e8b254e84c3a1543.svg";gon.illustrations_path="/assets/illustrations-c49dbb3e7efd45fd87c585991b7404ef220e825d822ebe473b570a75ed3abc2a.svg";gon.emoji_sprites_css_path="/assets/emoji_sprites-bd26211944b9d072037ec97cb138f1a52cd03ef185cd38b8d1fcc963245199a1.css";gon.emoji_backend_version=4;gon.test_env=false;gon.disable_animations=false;gon.suggested_label_colors={"#cc338b":"Magenta-pink","#dc143c":"Crimson","#c21e56":"Rose red","#cd5b45":"Dark coral","#ed9121":"Carrot orange","#eee600":"Titanium yellow","#009966":"Green-cyan","#8fbc8f":"Dark sea green","#6699cc":"Blue-gray","#e6e6fa":"Lavender","#9400d3":"Dark violet","#330066":"Deep violet","#36454f":"Charcoal grey","#808080":"Gray"};gon.first_day_of_week=1;gon.time_display_relative=true;gon.time_display_format=0;gon.ee=false;gon.jh=false;gon.dot_com=false;gon.uf_error_prefix="UF";gon.pat_prefix="glpat-";gon.fluid_layout=false;gon.keyboard_shortcuts_enabled=true;gon.broadcast_message_dismissal_path=null;gon.diagramsnet_url="https://embed.diagrams.net";gon.features={"uiForOrganizations":false,"pageBreadcrumbsInTopBar":false,"organizationSwitching":false,"findAndReplace":false,"removeMonitorMetrics":true,"workItemsClientSideBoards":false,"editorStickyTableHeaders":false,"exploreAnalyticsDashboards":false,"securityManagerRoleEnabled":true,"allowIframesInMarkdown":false,"inlineBlame":true,"repositoryFileTreeBrowser":true,"blobEditRefactor":true,"duoConvertCiUseDeveloperFlow":false,"vue3MigrateRepository":false};
//]]>
</script>

<script>
//<![CDATA[
const root = document.documentElement;
if (window.matchMedia('(prefers-color-scheme: dark)').matches) {
  root.classList.add('gl-dark');
}

window.matchMedia('(prefers-color-scheme: dark)').addEventListener('change', (e) => {
  if (e.matches) {
    root.classList.add('gl-dark');
  } else {
    root.classList.remove('gl-dark');
  }
});

//]]>
</script>
<script>
//<![CDATA[
var gl = window.gl || {};
gl.startup_calls = null;
gl.startup_graphql_calls = [{"query":"# @feature_category: source_code_management\nquery getBlobInfo(\n  $projectPath: ID!\n  $filePath: [String!]!\n  $ref: String!\n  $refType: RefType\n  $shouldFetchRawText: Boolean!\n) {\n  project(fullPath: $projectPath) {\n    __typename\n    id\n    repository {\n      __typename\n      empty\n      blobs(paths: $filePath, ref: $ref, refType: $refType) {\n        __typename\n        nodes {\n          __typename\n          id\n          webPath\n          name\n          size\n          rawSize\n          rawTextBlob @include(if: $shouldFetchRawText)\n          fileType\n          language\n          path\n          blamePath\n          editBlobPath\n          gitpodBlobUrl\n          ideEditPath\n          forkAndEditPath\n          ideForkAndEditPath\n          codeNavigationPath\n          projectBlobPathRoot\n          forkAndViewPath\n          environmentFormattedExternalUrl\n          environmentExternalUrlForRouteMap\n          canModifyBlob\n          canModifyBlobWithWebIde\n          canCurrentUserPushToBranch\n          archived\n          storedExternally\n          externalStorage\n          externalStorageUrl\n          rawPath\n          replacePath\n          pipelineEditorPath\n          simpleViewer {\n            fileType\n            tooLarge\n            type\n            renderError\n          }\n          richViewer {\n            fileType\n            tooLarge\n            type\n            renderError\n          }\n        }\n      }\n    }\n  }\n}\n","variables":{"projectPath":"benagil/cours/csc_2f001_ep/csc_2f001_ep","ref":"main","refType":"HEADS","filePath":"lab2/Makefile","shouldFetchRawText":true}}];

if (gl.startup_calls && window.fetch) {
  Object.keys(gl.startup_calls).forEach(apiCall => {
   gl.startup_calls[apiCall] = {
      fetchCall: fetch(apiCall, {
        // Emulate XHR for Rails AJAX request checks
        headers: {
          'X-Requested-With': 'XMLHttpRequest'
        },
        // fetch won’t send cookies in older browsers, unless you set the credentials init option.
        // We set to `same-origin` which is default value in modern browsers.
        // See https://github.com/whatwg/fetch/pull/585 for more information.
        credentials: 'same-origin'
      })
    };
  });
}
if (gl.startup_graphql_calls && window.fetch) {
  const headers = {"X-CSRF-Token":"b7zCDz7MW_-Fnvl1wC6x7N6bwsQwDxS7TIG9LraqN0NHw7hWOyS2soeDF6wSR5upU3qE0_Da9GrYw3MH4ARBig","x-gitlab-feature-category":"source_code_management"};
  const url = `https://gitlab.inria.fr/api/graphql`

  const opts = {
    method: "POST",
    headers: {
      "Content-Type": "application/json",
      ...headers,
    }
  };

  gl.startup_graphql_calls = gl.startup_graphql_calls.map(call => ({
    ...call,
    fetchCall: fetch(url, {
      ...opts,
      credentials: 'same-origin',
      body: JSON.stringify(call)
    })
  }))
}


//]]>
</script>

<link rel="prefetch" href="/assets/webpack/monaco.330df970.chunk.js">

<meta content="light dark" name="color-scheme">
<link rel="stylesheet" href="/assets/application-2ded8e982afdeb378755a997c85e22b308944a372c54bb21c8ef16a996e326a7.css" media="(prefers-color-scheme: light)" />
<link rel="stylesheet" href="/assets/application_dark-f00cd8f62f167f2e27076533937ff07e4eff630068ad28b7d07bdcdb96f805dc.css" media="(prefers-color-scheme: dark)" />
<link rel="stylesheet" href="/assets/page_bundles/tree-97914a558239c8f15ee05af37b5840df11dcc8dfd873393993f9830cbf002a38.css" /><link rel="stylesheet" href="/assets/page_bundles/projects-2d5b0f8de7829b78958778a73c6202488874e74d1b301ae6c825cacadb153dfb.css" /><link rel="stylesheet" href="/assets/page_bundles/commit_description-9e7efe20f0cef17d0606edabfad0418e9eb224aaeaa2dae32c817060fa60abcc.css" /><link rel="stylesheet" href="/assets/page_bundles/work_items-ffaabf548efb8bd9bee71a5704a0e41e4db5af0d502028c053a88ea3ebc702f9.css" /><link rel="stylesheet" href="/assets/page_bundles/notes_shared-1a99012f97ba760b6bc57563b5b2863243958d14d14a25fee12843f0268c2731.css" />
<link rel="stylesheet" href="/assets/tailwind_cqs-b1b4e9e5c6238ff26341ede69f7ea5b2797112801aa5e62fbfb8bf85d5d65260.css" />


<link rel="stylesheet" href="/assets/fonts-deb7ad1d55ca77c0172d8538d53442af63604ff490c74acc2859db295c125bdb.css" />
<link rel="stylesheet" href="/assets/highlight/themes/white-7ea69b41b9a1d48ec0f546f19e9c0bef9cedaa3cd15f06ee433460ce1b2461b0.css" media="(prefers-color-scheme: light)" />
<link rel="stylesheet" href="/assets/highlight/themes/dark-9735b2efe7ac5369a897452ddf41f2df0e0136260be9e29a3856f0d064f735e9.css" media="(prefers-color-scheme: dark)" />

<script src="/assets/webpack/runtime.231d92e5.bundle.js" defer="defer"></script>
<script src="/assets/webpack/main.7450b03d.chunk.js" defer="defer"></script>
<script src="/assets/webpack/tracker.d838be2f.chunk.js" defer="defer"></script>
<script>
//<![CDATA[
window.snowplowOptions = {"namespace":"gl","hostname":"gitlab.inria.fr:443","postPath":"/-/collect_events","forceSecureTracker":true,"appId":"gitlab_sm"};
gl = window.gl || {};
gl.snowplowStandardContext = {"schema":"iglu:com.gitlab/gitlab_standard/jsonschema/1-1-8","data":{"environment":"self-managed","source":"gitlab-rails","correlation_id":"01M3V1RBWRH3WPWTFJDHC1XS51","extra":{},"user_id":null,"global_user_id":null,"user_type":null,"is_gitlab_team_member":null,"namespace_id":104943,"ultimate_parent_namespace_id":72212,"project_id":71830,"feature_enabled_by_namespace_ids":null,"realm":"self-managed","deployment_type":"self-managed","context_generated_at":"2026-10-01T08:17:17.667+02:00","organization_id":1}};
gl.snowplowPseudonymizedPageUrl = "https://gitlab.inria.fr/namespace104943/project71830/-/blob/:repository_path";
gl.maskedDefaultReferrerUrl = "https://gitlab.inria.fr/namespace/project/-/blob/id";
gl.ga4MeasurementId = 'G-ENFH3X7M5Y';
gl.duoEvents = [];
gl.onlySendDuoEvents = true;


//]]>
</script>



<script src="/assets/webpack/commons-pages.admin.application_settings.service_accounts-pages.explore.analytics_dashboards-pages.e-306889d5.c005c5a9.chunk.js" defer="defer"></script>
<script src="/assets/webpack/commons-pages.search.show-super_sidebar.67d9a544.chunk.js" defer="defer"></script>
<script src="/assets/webpack/super_sidebar.792962d8.chunk.js" defer="defer"></script>
<script src="/assets/webpack/commons-pages.projects-pages.projects.activity-pages.projects.alert_management.details-pages.project-02879649.574aa50f.chunk.js" defer="defer"></script>
<script src="/assets/webpack/commons-pages.groups.saved_views.show-pages.groups.work_items-pages.groups.work_items.show-pages.pro-27e63f02.68e98c99.chunk.js" defer="defer"></script>
<script src="/assets/webpack/commons-pages.import.bitbucket_server.new-pages.import.gitea.new-pages.import.gitlab_projects.new-pa-31ebfd6f.cd9a78ca.chunk.js" defer="defer"></script>
<script src="/assets/webpack/commons-pages.projects.blob.show-pages.projects.show-pages.projects.snippets.edit-pages.projects.sni-42df7d4c.8a2fc5ed.chunk.js" defer="defer"></script>
<script src="/assets/webpack/commons-pages.projects.blob.show-pages.projects.show-pages.projects.snippets.show-pages.projects.tre-c684fcf6.d7a01c32.chunk.js" defer="defer"></script>
<script src="/assets/webpack/commons-pages.projects.blob.edit-pages.projects.blob.new-pages.projects.blob.show-pages.projects.sho-ec79e51c.e297b211.chunk.js" defer="defer"></script>
<script src="/assets/webpack/commons-pages.projects.blob.show-pages.projects.show-pages.projects.tree.show-pages.search.show.b7c1b304.chunk.js" defer="defer"></script>
<script src="/assets/webpack/commons-pages.projects.blob.show-pages.projects.commits.show-pages.projects.show-pages.projects.tree.show.688bd128.chunk.js" defer="defer"></script>
<script src="/assets/webpack/f30ab50b.98567f16.chunk.js" defer="defer"></script>
<script src="/assets/webpack/commons-pages.groups.show-pages.projects.blob.show-pages.projects.show-pages.projects.tree.show.6c251334.chunk.js" defer="defer"></script>
<script src="/assets/webpack/commons-pages.projects.blob.show-pages.projects.show-pages.projects.tree.show.ff8e3357.chunk.js" defer="defer"></script>
<script src="/assets/webpack/commons-pages.projects.blob.show-pages.projects.tree.show.6a36e747.chunk.js" defer="defer"></script>
<script src="/assets/webpack/pages.projects.blob.show.33db051a.chunk.js" defer="defer"></script>

<meta content="object" property="og:type">
<meta content="GitLab" property="og:site_name">
<meta content="lab2/Makefile · main · Benagil / cours / csc_2f001_ep / csc_2f001_ep · GitLab" property="og:title">
<meta content="Gitlab at Inria" property="og:description">
<meta content="https://gitlab.inria.fr/assets/twitter_card-570ddb06edf56a2312253c5872489847a0f385112ddbcd71ccfa1570febab5d2.jpg" property="og:image">
<meta content="64" property="og:image:width">
<meta content="64" property="og:image:height">
<meta content="https://gitlab.inria.fr/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/blob/main/lab2/Makefile" property="og:url">
<meta content="summary" property="twitter:card">
<meta content="lab2/Makefile · main · Benagil / cours / csc_2f001_ep / csc_2f001_ep · GitLab" property="twitter:title">
<meta content="Gitlab at Inria" property="twitter:description">
<meta content="https://gitlab.inria.fr/assets/twitter_card-570ddb06edf56a2312253c5872489847a0f385112ddbcd71ccfa1570febab5d2.jpg" property="twitter:image">

<meta name="csrf-param" content="authenticity_token" />
<meta name="csrf-token" content="HR_Zis--E2sfIqIdTpHEwb08gK48x9ALUdKE6SXmzfs1YKPTylb-Jh0_TMSc-O6EMN3GufwSMNrFkErAc0i7Mg" />
<meta name="csp-nonce" />
<meta name="action-cable-url" content="/-/cable" />
<link href="/-/manifest.json" rel="manifest">
<link rel="icon" type="image/png" href="/assets/favicon-72a2cad5025aa931d6ea56c3201d1f18e68a8cd39788c7c80d5b2b82aa5143ef.png" id="favicon" data-original-href="/assets/favicon-72a2cad5025aa931d6ea56c3201d1f18e68a8cd39788c7c80d5b2b82aa5143ef.png" />
<link rel="apple-touch-icon" type="image/x-icon" href="/assets/apple-touch-icon-b049d4bc0dd9626f31db825d61880737befc7835982586d015bded10b4435460.png" />
<link href="/search/opensearch.xml" rel="search" title="Search GitLab" type="application/opensearchdescription+xml">


<!-- Matomo -->
<script>
//<![CDATA[
var _paq = window._paq = window._paq || [];
_paq.push(['trackPageView']);
_paq.push(['enableLinkTracking']);
;
(function() {
  var u="//piwik.inria.fr/";
  _paq.push(['setTrackerUrl', u+'matomo.php']);
  _paq.push(['setSiteId', "52"]);
  var d=document, g=d.createElement('script'), s=d.getElementsByTagName('script')[0];
  g.type='text/javascript'; g.async=true; g.src=u+'matomo.js'; s.parentNode.insertBefore(g,s);
})();


//]]>
</script><noscript><p><img src="//piwik.inria.fr/matomo.php?idsite=52" style="border:0;" alt="" /></p></noscript>
<!-- End Matomo Code -->


<meta content="Gitlab at Inria" name="description">
<meta content="#F1F0F6" media="(prefers-color-scheme: light)" name="theme-color">
<meta content="#232128" media="(prefers-color-scheme: dark)" name="theme-color">
</head>

<body class="tab-width-8 gl-browser-chrome gl-platform-windows" data-group="csc_2f001_ep" data-group-full-path="benagil/cours/csc_2f001_ep" data-namespace-id="104943" data-page="projects:blob:show" data-page-type-id="main/lab2/Makefile" data-project="csc_2f001_ep" data-project-full-path="benagil/cours/csc_2f001_ep/csc_2f001_ep" data-project-id="71830">
<div id="js-tooltips-container"></div>

<script>
//<![CDATA[
gl = window.gl || {};
gl.client = {"isChrome":true,"isWindows":true};


//]]>
</script>

<div class="header-message" style="background-color: #ffffff;color: #000000"><p><a href="https://gitlab.inria.fr/siteadmin/doc/-/wikis/Mentions-l%C3%A9gales">Mentions légales du service</a></p></div>
<header class="super-topbar js-super-topbar"></header>
<div class="layout-page js-page-layout page-with-super-sidebar">
<script>
//<![CDATA[
const outer = document.createElement('div');
outer.style.visibility = 'hidden';
outer.style.overflow = 'scroll';
document.body.appendChild(outer);
const inner = document.createElement('div');
outer.appendChild(inner);
const scrollbarWidth = outer.offsetWidth - inner.offsetWidth;
outer.parentNode.removeChild(outer);
document.documentElement.style.setProperty('--scrollbar-width', `${scrollbarWidth}px`);

//]]>
</script><aside class="js-super-sidebar super-sidebar super-sidebar-loading" data-command-palette="{&quot;project_files_url&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/files/main?format=json&quot;,&quot;project_blob_url&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/blob/main&quot;}" data-is-saas="false" data-root-path="/" data-sidebar="{&quot;is_logged_in&quot;:false,&quot;compare_plans_url&quot;:&quot;https://about.gitlab.com/pricing&quot;,&quot;context_switcher_links&quot;:[{&quot;title&quot;:&quot;Explore&quot;,&quot;link&quot;:&quot;/explore&quot;,&quot;icon&quot;:&quot;compass&quot;}],&quot;current_menu_items&quot;:[{&quot;id&quot;:&quot;project_overview&quot;,&quot;title&quot;:&quot;csc_2f001_ep&quot;,&quot;entity_id&quot;:71830,&quot;link&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep&quot;,&quot;link_classes&quot;:&quot;shortcuts-project&quot;,&quot;is_active&quot;:false},{&quot;id&quot;:&quot;manage_menu&quot;,&quot;title&quot;:&quot;Manage&quot;,&quot;icon&quot;:&quot;users&quot;,&quot;avatar_shape&quot;:&quot;rect&quot;,&quot;link&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/activity&quot;,&quot;is_active&quot;:false,&quot;items&quot;:[{&quot;id&quot;:&quot;activity&quot;,&quot;title&quot;:&quot;Activity&quot;,&quot;link&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/activity&quot;,&quot;link_classes&quot;:&quot;shortcuts-project-activity&quot;,&quot;is_active&quot;:false},{&quot;id&quot;:&quot;members&quot;,&quot;title&quot;:&quot;Members&quot;,&quot;link&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/project_members&quot;,&quot;is_active&quot;:false},{&quot;id&quot;:&quot;labels&quot;,&quot;title&quot;:&quot;Labels&quot;,&quot;link&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/labels&quot;,&quot;is_active&quot;:false}],&quot;separated&quot;:false},{&quot;id&quot;:&quot;plan_menu&quot;,&quot;title&quot;:&quot;Plan&quot;,&quot;icon&quot;:&quot;planning&quot;,&quot;avatar_shape&quot;:&quot;rect&quot;,&quot;link&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/work_items&quot;,&quot;is_active&quot;:false,&quot;items&quot;:[{&quot;id&quot;:&quot;project_issue_list&quot;,&quot;title&quot;:&quot;Work items&quot;,&quot;link&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/work_items&quot;,&quot;link_classes&quot;:&quot;shortcuts-issues has-sub-items&quot;,&quot;pill_count_field&quot;:&quot;openWorkItemsCount&quot;,&quot;pill_count_dynamic&quot;:false,&quot;is_active&quot;:false},{&quot;id&quot;:&quot;boards&quot;,&quot;title&quot;:&quot;Issue boards&quot;,&quot;link&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/boards&quot;,&quot;link_classes&quot;:&quot;shortcuts-issue-boards&quot;,&quot;is_active&quot;:false},{&quot;id&quot;:&quot;milestones&quot;,&quot;title&quot;:&quot;Milestones&quot;,&quot;link&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/milestones&quot;,&quot;is_active&quot;:false},{&quot;id&quot;:&quot;project_wiki&quot;,&quot;title&quot;:&quot;Wiki&quot;,&quot;link&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/wikis&quot;,&quot;link_classes&quot;:&quot;shortcuts-wiki&quot;,&quot;is_active&quot;:false}],&quot;separated&quot;:false},{&quot;id&quot;:&quot;code_menu&quot;,&quot;title&quot;:&quot;Code&quot;,&quot;icon&quot;:&quot;code&quot;,&quot;avatar_shape&quot;:&quot;rect&quot;,&quot;link&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/merge_requests&quot;,&quot;is_active&quot;:true,&quot;items&quot;:[{&quot;id&quot;:&quot;project_merge_request_list&quot;,&quot;title&quot;:&quot;Merge requests&quot;,&quot;link&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/merge_requests&quot;,&quot;link_classes&quot;:&quot;shortcuts-merge_requests&quot;,&quot;pill_count_field&quot;:&quot;openMergeRequestsCount&quot;,&quot;pill_count_dynamic&quot;:false,&quot;is_active&quot;:false},{&quot;id&quot;:&quot;files&quot;,&quot;title&quot;:&quot;Repository&quot;,&quot;link&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/tree/main&quot;,&quot;link_classes&quot;:&quot;shortcuts-tree&quot;,&quot;description&quot;:&quot;Browse and manage your repository files.&quot;,&quot;library_icon&quot;:&quot;doc-text&quot;,&quot;is_active&quot;:true},{&quot;id&quot;:&quot;branches&quot;,&quot;title&quot;:&quot;Branches&quot;,&quot;link&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/branches&quot;,&quot;description&quot;:&quot;Manage the branches of your repository.&quot;,&quot;library_icon&quot;:&quot;branch&quot;,&quot;is_active&quot;:false},{&quot;id&quot;:&quot;commits&quot;,&quot;title&quot;:&quot;Commits&quot;,&quot;link&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/commits/main?ref_type=heads&quot;,&quot;link_classes&quot;:&quot;shortcuts-commits&quot;,&quot;description&quot;:&quot;View the commit history of your repository.&quot;,&quot;library_icon&quot;:&quot;commit&quot;,&quot;is_active&quot;:false},{&quot;id&quot;:&quot;tags&quot;,&quot;title&quot;:&quot;Tags&quot;,&quot;link&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/tags&quot;,&quot;description&quot;:&quot;Tag specific points in your repository history.&quot;,&quot;library_icon&quot;:&quot;label&quot;,&quot;is_active&quot;:false},{&quot;id&quot;:&quot;graphs&quot;,&quot;title&quot;:&quot;Repository graph&quot;,&quot;link&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/network/main?ref_type=heads&quot;,&quot;link_classes&quot;:&quot;shortcuts-network&quot;,&quot;description&quot;:&quot;Visualize the branch and commit graph of your repository.&quot;,&quot;library_icon&quot;:&quot;chart&quot;,&quot;is_active&quot;:false},{&quot;id&quot;:&quot;compare&quot;,&quot;title&quot;:&quot;Compare revisions&quot;,&quot;link&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/compare?from=main\u0026to=main&quot;,&quot;description&quot;:&quot;Compare changes between branches, tags, or commits.&quot;,&quot;library_icon&quot;:&quot;comparison&quot;,&quot;is_active&quot;:false},{&quot;id&quot;:&quot;project_snippets&quot;,&quot;title&quot;:&quot;Snippets&quot;,&quot;link&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/snippets&quot;,&quot;link_classes&quot;:&quot;shortcuts-snippets&quot;,&quot;is_active&quot;:false}],&quot;separated&quot;:false},{&quot;id&quot;:&quot;deploy_menu&quot;,&quot;title&quot;:&quot;Deploy&quot;,&quot;icon&quot;:&quot;deployments&quot;,&quot;avatar_shape&quot;:&quot;rect&quot;,&quot;link&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/releases&quot;,&quot;is_active&quot;:false,&quot;items&quot;:[{&quot;id&quot;:&quot;releases&quot;,&quot;title&quot;:&quot;Releases&quot;,&quot;link&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/releases&quot;,&quot;link_classes&quot;:&quot;shortcuts-deployments-releases&quot;,&quot;is_active&quot;:false},{&quot;id&quot;:&quot;packages_registry&quot;,&quot;title&quot;:&quot;Package registry&quot;,&quot;link&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/packages&quot;,&quot;link_classes&quot;:&quot;shortcuts-container-registry&quot;,&quot;is_active&quot;:false},{&quot;id&quot;:&quot;model_registry&quot;,&quot;title&quot;:&quot;Model registry&quot;,&quot;link&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/ml/models&quot;,&quot;is_active&quot;:false}],&quot;separated&quot;:false},{&quot;id&quot;:&quot;operations_menu&quot;,&quot;title&quot;:&quot;Operate&quot;,&quot;icon&quot;:&quot;cloud-pod&quot;,&quot;avatar_shape&quot;:&quot;rect&quot;,&quot;link&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/terraform_module_registry&quot;,&quot;is_active&quot;:false,&quot;items&quot;:[{&quot;id&quot;:&quot;infrastructure_registry&quot;,&quot;title&quot;:&quot;Terraform modules&quot;,&quot;link&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/terraform_module_registry&quot;,&quot;is_active&quot;:false}],&quot;separated&quot;:false},{&quot;id&quot;:&quot;monitor_menu&quot;,&quot;title&quot;:&quot;Monitor&quot;,&quot;icon&quot;:&quot;monitor&quot;,&quot;avatar_shape&quot;:&quot;rect&quot;,&quot;link&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/incidents&quot;,&quot;is_active&quot;:false,&quot;items&quot;:[{&quot;id&quot;:&quot;incidents&quot;,&quot;title&quot;:&quot;Incidents&quot;,&quot;link&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/incidents&quot;,&quot;is_active&quot;:false},{&quot;id&quot;:&quot;service_desk&quot;,&quot;title&quot;:&quot;Service Desk&quot;,&quot;link&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/issues/service_desk&quot;,&quot;is_active&quot;:false}],&quot;separated&quot;:false},{&quot;id&quot;:&quot;analyze_menu&quot;,&quot;title&quot;:&quot;Analyze&quot;,&quot;icon&quot;:&quot;chart&quot;,&quot;avatar_shape&quot;:&quot;rect&quot;,&quot;link&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/value_stream_analytics&quot;,&quot;is_active&quot;:false,&quot;items&quot;:[{&quot;id&quot;:&quot;cycle_analytics&quot;,&quot;title&quot;:&quot;Value stream analytics&quot;,&quot;link&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/value_stream_analytics&quot;,&quot;link_classes&quot;:&quot;shortcuts-project-cycle-analytics&quot;,&quot;is_active&quot;:false},{&quot;id&quot;:&quot;contributors&quot;,&quot;title&quot;:&quot;Contributor analytics&quot;,&quot;link&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/graphs/main?ref_type=heads&quot;,&quot;description&quot;:&quot;See commit statistics for each contributor.&quot;,&quot;library_icon&quot;:&quot;users&quot;,&quot;is_active&quot;:false},{&quot;id&quot;:&quot;repository_analytics&quot;,&quot;title&quot;:&quot;Repository analytics&quot;,&quot;link&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/graphs/main/charts&quot;,&quot;link_classes&quot;:&quot;shortcuts-repository-charts&quot;,&quot;is_active&quot;:false},{&quot;id&quot;:&quot;model_experiments&quot;,&quot;title&quot;:&quot;Model experiments&quot;,&quot;link&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/ml/experiments&quot;,&quot;is_active&quot;:false}],&quot;separated&quot;:false}],&quot;current_context_header&quot;:&quot;Project&quot;,&quot;university_path&quot;:&quot;https://university.gitlab.com&quot;,&quot;support_path&quot;:&quot;https://gitlab.inria.fr/siteadmin/doc/wikis/faq&quot;,&quot;docs_path&quot;:&quot;/help/docs&quot;,&quot;display_whats_new&quot;:false,&quot;show_version_check&quot;:null,&quot;search&quot;:{&quot;search_path&quot;:&quot;/search&quot;,&quot;issues_path&quot;:&quot;/dashboard/issues&quot;,&quot;mr_path&quot;:&quot;/dashboard/merge_requests&quot;,&quot;autocomplete_path&quot;:&quot;/search/autocomplete&quot;,&quot;settings_path&quot;:&quot;/search/settings&quot;,&quot;search_context&quot;:{&quot;group&quot;:{&quot;id&quot;:104943,&quot;name&quot;:&quot;csc_2f001_ep&quot;,&quot;full_name&quot;:&quot;Benagil / cours / csc_2f001_ep&quot;},&quot;group_metadata&quot;:{&quot;issues_path&quot;:&quot;/groups/benagil/cours/csc_2f001_ep/-/issues&quot;,&quot;mr_path&quot;:&quot;/groups/benagil/cours/csc_2f001_ep/-/merge_requests&quot;},&quot;project&quot;:{&quot;id&quot;:71830,&quot;name&quot;:&quot;csc_2f001_ep&quot;},&quot;project_metadata&quot;:{&quot;mr_path&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/merge_requests&quot;,&quot;issues_path&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/issues&quot;},&quot;code_search&quot;:true,&quot;ref&quot;:&quot;main&quot;,&quot;scope&quot;:null,&quot;for_snippets&quot;:null}},&quot;panel_type&quot;:&quot;project&quot;,&quot;shortcut_links&quot;:[{&quot;title&quot;:&quot;Snippets&quot;,&quot;href&quot;:&quot;/explore/snippets&quot;,&quot;css_class&quot;:&quot;dashboard-shortcuts-snippets&quot;},{&quot;title&quot;:&quot;Groups&quot;,&quot;href&quot;:&quot;/explore/groups&quot;,&quot;css_class&quot;:&quot;dashboard-shortcuts-groups&quot;},{&quot;title&quot;:&quot;Projects&quot;,&quot;href&quot;:&quot;/explore/projects&quot;,&quot;css_class&quot;:&quot;dashboard-shortcuts-projects&quot;}],&quot;terms&quot;:null,&quot;sign_in_visible&quot;:&quot;true&quot;,&quot;allow_signup&quot;:&quot;false&quot;,&quot;new_user_registration_path&quot;:&quot;/users/sign_up&quot;,&quot;sign_in_path&quot;:&quot;/users/sign_in?redirect_to_referer=yes&quot;}"></aside>

<div class="panels-container gl-flex gl-gap-3">
<div class="content-panels gl-flex-1 gl-w-full gl-flex gl-gap-3 gl-relative js-content-panels gl-@container/content-panels">
<div class="paneled-view static-panel js-static-panel js-paneled-view content-wrapper">
<div class="panel-header">
<div class="broadcast-wrapper">

<div class="gl-broadcast-message banner js-broadcast-notification-151 indigo" data-broadcast-banner data-testid="banner-broadcast-message" role="alert">
<div class="gl-broadcast-message-content">
<div class="gl-broadcast-message-icon">
<svg class="s16" data-testid="bullhorn-icon"><use href="/assets/icons-744c96d42bcc6345fdb1c870432a980c5f983ed177df344a4a5f94b625ac4ce8.svg#bullhorn"></use></svg>
</div>
<div class="gl-broadcast-message-text">
<h2 class="gl-sr-only">Admin message</h2>
<p>A GitLab upgrade is scheduled for Monday October 5th. The service will be unavailable from 9 am to 12. We'll keep you posted on the progress of the upgrade on the Mattermost channel: <a href="https://mattermost.inria.fr/devel/channels/gitlab" rel="nofollow noreferrer noopener" target="_blank">https://mattermost.inria.fr/devel/channels/gitlab</a>. We recommend that you do not work on the platform until an announcement indicates that maintenance is complete.</p>
</div>
</div>
</div>





</div>
<div class="panel-header-inner js-panel-header-inner">
<script type="application/ld+json">
{"@context":"https://schema.org","@type":"BreadcrumbList","itemListElement":[{"@type":"ListItem","position":1,"name":"Benagil","item":"https://gitlab.inria.fr/benagil"},{"@type":"ListItem","position":2,"name":"cours","item":"https://gitlab.inria.fr/benagil/cours"},{"@type":"ListItem","position":3,"name":"csc_2f001_ep","item":"https://gitlab.inria.fr/benagil/cours/csc_2f001_ep"},{"@type":"ListItem","position":4,"name":"csc_2f001_ep","item":"https://gitlab.inria.fr/benagil/cours/csc_2f001_ep/csc_2f001_ep"},{"@type":"ListItem","position":5,"name":"Repository","item":"https://gitlab.inria.fr/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/blob/main/lab2/Makefile"}]}


</script>
<div data-testid="breadcrumb-links" id="js-vue-page-breadcrumbs-wrapper">
<div data-breadcrumbs-json="[{&quot;text&quot;:&quot;Benagil&quot;,&quot;href&quot;:&quot;/benagil&quot;,&quot;avatarPath&quot;:&quot;/uploads/-/system/group/avatar/72212/Untitled.png&quot;},{&quot;text&quot;:&quot;cours&quot;,&quot;href&quot;:&quot;/benagil/cours&quot;,&quot;avatarPath&quot;:null},{&quot;text&quot;:&quot;csc_2f001_ep&quot;,&quot;href&quot;:&quot;/benagil/cours/csc_2f001_ep&quot;,&quot;avatarPath&quot;:null},{&quot;text&quot;:&quot;csc_2f001_ep&quot;,&quot;href&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep&quot;,&quot;avatarPath&quot;:null},{&quot;text&quot;:&quot;Repository&quot;,&quot;href&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/blob/main/lab2/Makefile&quot;,&quot;avatarPath&quot;:null}]" id="js-vue-page-breadcrumbs"></div>
<div id="js-injected-page-breadcrumbs"></div>
</div>
<div id="js-page-breadcrumbs-extra"></div>



<div class="panel-header-inner-actions">


<div class="panel-header-inner-actions-portal-target js-panel-actions-portal-target"></div>
</div>
</div>
</div>
<div class="panel-content">
<div class="panel-content-inner js-static-panel-inner">
<div class="alert-wrapper alert-wrapper-top-space gl-flex gl-flex-col gl-gap-3 container-fluid container-limited">



























</div>


<div class="container-fluid container-limited project-highlight-puc">
<main class="content gl-pb-3 gl-@container/panel" id="content-body" itemscope itemtype="http://schema.org/SoftwareSourceCode">
<div id="js-drawer-container"></div>
<div class="flash-container flash-container-page sticky" data-testid="flash-container">
<div id="js-global-alerts"></div>
</div>







<div class="js-signature-container" data-signatures-path="/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/commits/393ac8adab97579aa6cdf177e7d215144c9fb988/signatures?limit=1"></div>

<div class="gl-flex navigation-root">
<div id="js-file-browser" style="width:320px"></div>
<div class="tree-holder gl-pt-5 gl-pl-4 gl-w-full gl-min-w-0" id="tree-holder">
<div data-blob-path="lab2/Makefile" data-breadcrumbs-can-collaborate="false" data-breadcrumbs-can-edit-tree="false" data-breadcrumbs-can-push-code="false" data-breadcrumbs-can-push-to-branch="false" data-breadcrumbs-new-blob-path="/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/new/main" data-breadcrumbs-new-branch-path="/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/branches/new" data-breadcrumbs-new-dir-path="/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/create_dir/main" data-breadcrumbs-new-tag-path="/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/tags/new" data-breadcrumbs-upload-path="/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/create/main" data-download-links="[{&quot;text&quot;:&quot;zip&quot;,&quot;path&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/archive/main/csc_2f001_ep-main.zip?ref_type=heads&quot;},{&quot;text&quot;:&quot;tar.gz&quot;,&quot;path&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/archive/main/csc_2f001_ep-main.tar.gz?ref_type=heads&quot;},{&quot;text&quot;:&quot;tar.bz2&quot;,&quot;path&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/archive/main/csc_2f001_ep-main.tar.bz2?ref_type=heads&quot;},{&quot;text&quot;:&quot;tar&quot;,&quot;path&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/archive/main/csc_2f001_ep-main.tar?ref_type=heads&quot;}]" data-escaped-ref="main" data-history-link="/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/commits/main" data-http-url="https://gitlab.inria.fr/benagil/cours/csc_2f001_ep/csc_2f001_ep.git" data-project-id="71830" data-project-path="benagil/cours/csc_2f001_ep/csc_2f001_ep" data-project-root-path="/benagil/cours/csc_2f001_ep/csc_2f001_ep" data-project-short-path="csc_2f001_ep" data-ref="main" data-ref-type="heads" data-root-ref="main" data-show-no-ssh-key-message="" data-ssh-url="git@gitlab.inria.fr:benagil/cours/csc_2f001_ep/csc_2f001_ep.git" data-user-settings-ssh-keys-path="/-/user_settings/ssh_keys" data-web-ide-button-default-branch="main" data-web-ide-button-options="{&quot;project_path&quot;:&quot;benagil/cours/csc_2f001_ep/csc_2f001_ep&quot;,&quot;ref&quot;:&quot;main&quot;,&quot;is_fork&quot;:false,&quot;needs_to_fork&quot;:true,&quot;gitpod_enabled&quot;:false,&quot;is_blob&quot;:true,&quot;show_edit_button&quot;:false,&quot;show_web_ide_button&quot;:false,&quot;show_gitpod_button&quot;:false,&quot;show_pipeline_editor_button&quot;:false,&quot;web_ide_url&quot;:&quot;/-/ide/project/benagil/cours/csc_2f001_ep/csc_2f001_ep/edit/main/-/lab2/Makefile&quot;,&quot;edit_url&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/edit/main/lab2/Makefile&quot;,&quot;pipeline_editor_url&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/ci/editor?branch_name=main&quot;,&quot;gitpod_url&quot;:&quot;&quot;,&quot;user_preferences_gitpod_path&quot;:&quot;/-/profile/preferences#user_gitpod_enabled&quot;,&quot;user_profile_enable_gitpod_path&quot;:&quot;/-/user_settings/profile?user%5Bgitpod_enabled%5D=true&quot;,&quot;fork_path&quot;:&quot;/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/forks/new&quot;,&quot;fork_modal_id&quot;:null}" data-xcode-url="" id="js-repository-blob-header-app"></div>
<div class="info-well">
<div data-history-link="/benagil/cours/csc_2f001_ep/csc_2f001_ep/-/commits/main" id="js-last-commit"></div>
<div class="gl-hidden @sm/panel:gl-block">

</div>
</div>
<div class="blob-content-holder js-per-page" data-blame-per-page="1000" id="blob-content-holder">
<div data-blob-path="lab2/Makefile" data-can-download-code="true" data-escaped-ref="main" data-full-name="Benagil / cours / csc_2f001_ep / csc_2f001_ep" data-has-revs-file="false" data-original-branch="main" data-project-path="benagil/cours/csc_2f001_ep/csc_2f001_ep" data-ref-type="heads" data-resource-id="gid://gitlab/Project/71830" data-user-id="" id="js-view-blob-app">
<div class="gl-spinner-container" role="status"><span aria-hidden class="gl-spinner gl-spinner-md gl-spinner-dark !gl-align-text-bottom"></span><span class="gl-sr-only !gl-absolute">Loading</span>
</div>
</div>
</div>

</div>
</div>
<script>
//<![CDATA[
  window.gl = window.gl || {};
  window.gl.webIDEPath = '/-/ide/project/benagil/cours/csc_2f001_ep/csc_2f001_ep/edit/main/-/lab2/Makefile'


//]]>
</script>
<div data-ambiguous="false" data-ref="main" id="js-ambiguous-ref-modal"></div>


</main>
</div>


</div>


</div>
</div>
<div class="paneled-view-portal gl-@container/panel !gl-absolute gl-shadow-lg @xl/content-panels:gl-w-1/2 @xl/content-panels:gl-shadow-none @xl/content-panels:!gl-relative gl-right-0" id="contextual-panel-portal"></div>
</div>
</div>

</div>


<script>
//<![CDATA[
if ('loading' in HTMLImageElement.prototype) {
  document.querySelectorAll('img.lazy').forEach(img => {
    img.loading = 'lazy';
    let imgUrl = img.dataset.src;
    // Only adding width + height for avatars for now
    if (imgUrl.indexOf('/avatar/') > -1 && imgUrl.indexOf('?') === -1) {
      const targetWidth = img.getAttribute('width') || img.width;
      imgUrl += `?width=${targetWidth}`;
    }
    img.src = imgUrl;
    img.removeAttribute('data-src');
    img.classList.remove('lazy');
    img.classList.add('js-lazy-loaded');
    img.dataset.testid = 'js-lazy-loaded-content';
  });
}

//]]>
</script>
<script>
//<![CDATA[
gl = window.gl || {};
gl.experiments = {};


//]]>
</script>

</body>
</html>

